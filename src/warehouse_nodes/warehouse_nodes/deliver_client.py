import sys
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from warehouse_interfaces.action import Deliver


class DeliverActionClient(Node):

    def __init__(self):
        super().__init__('deliver_action_client')

        self._client = ActionClient(
            self, Deliver, 'deliver'
        )

    def send_goal(self, destination, distance, speed):

        self.get_logger().info('Waiting for action server...')

        self._client.wait_for_server()

        goal = Deliver.Goal()

        goal.destination = destination
        goal.distance = distance
        goal.speed = speed

        future = self._client.send_goal_async(
            goal,
            feedback_callback=self.feedback_callback
        )

        future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):

        goal_handle = future.result()

        if not goal_handle.accepted:
            self.get_logger().info('Delivery goal rejected')
            rclpy.shutdown()
            return

        self.get_logger().info('Delivery goal accepted')

        result_future = goal_handle.get_result_async()

        result_future.add_done_callback(self.result_callback)

    def feedback_callback(self, feedback_msg):

        feedback = feedback_msg.feedback

        self.get_logger().info(
            f'Remaining distance: '
            f'{feedback.remaining_distance:.2f} m, '
            f'Progress: {feedback.percent:.1f}%'
        )

    def result_callback(self, future):

        result = future.result().result

        self.get_logger().info(
            f'Delivery success: {result.success}, '
            f'Time taken: {result.time_taken:.2f} seconds'
        )

        rclpy.shutdown()


def main(args=None):

    rclpy.init(args=args)

    destination = sys.argv[1] if len(sys.argv) > 1 else 'Warehouse A'
    distance = float(sys.argv[2]) if len(sys.argv) > 2 else 5.0
    speed = float(sys.argv[3]) if len(sys.argv) > 3 else 1.0

    node = DeliverActionClient()

    node.send_goal(destination, distance, speed)

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if rclpy.ok():
            node.destroy_node()
            rclpy.try_shutdown()


if __name__ == '__main__':
    main()