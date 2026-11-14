import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from warehouse_interfaces.action import Deliver


class DeliverActionServer(Node):

    def __init__(self):
        super().__init__('deliver_action_server')

        self._server = ActionServer(
            self,
            Deliver,
            'deliver',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback,
            callback_group=ReentrantCallbackGroup()
        )

        self.get_logger().info('Deliver action server ready')

    # Validate the delivery goal
    def goal_callback(self, goal_request):

        if (not goal_request.destination.strip()
                or goal_request.distance <= 0.0
                or goal_request.speed <= 0.0):
            self.get_logger().warn('Invalid delivery goal rejected')
            return GoalResponse.REJECT

        self.get_logger().info(
            f'Delivery goal received: {goal_request.destination}'
        )

        return GoalResponse.ACCEPT

    # Handle cancellation
    def cancel_callback(self, goal_handle):
        self.get_logger().info('Cancel requested')
        return CancelResponse.ACCEPT

    # Execute delivery
    def execute_callback(self, goal_handle):

        distance = goal_handle.request.distance
        speed = goal_handle.request.speed

        remaining = distance
        elapsed_time = 0.0

        feedback = Deliver.Feedback()
        result = Deliver.Result()

        step = 0.5

        while remaining > 0.0:

            if goal_handle.is_cancel_requested:
                goal_handle.canceled()

                result.success = False
                result.time_taken = elapsed_time

                return result

            travelled = min(speed * step, remaining)
            remaining -= travelled
            elapsed_time += step

            feedback.remaining_distance = remaining
            feedback.percent = (
                (distance - remaining) / distance
            ) * 100.0

            goal_handle.publish_feedback(feedback)

            self.get_logger().info(
                f'Remaining: {remaining:.2f} m, '
                f'Progress: {feedback.percent:.1f}%'
            )

            time.sleep(step)

        goal_handle.succeed()

        result.success = True
        result.time_taken = distance / speed

        self.get_logger().info('Delivery completed')

        return result


def main(args=None):

    rclpy.init(args=args)

    node = DeliverActionServer()

    executor = MultiThreadedExecutor()
    executor.add_node(node)

    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        executor.shutdown()
        node.destroy_node()
        rclpy.try_shutdown()


if __name__ == '__main__':
    main()