import rclpy
from rclpy.node import Node

from warehouse_interfaces.msg import DeliveryStatus
from warehouse_interfaces.srv import LoadPackage


class StatusPublisher(Node):

    def __init__(self):
        super().__init__('status_publisher')

        self.package_count = 0

        self.publisher = self.create_publisher(
            DeliveryStatus, 'delivery_status', 10)

        self.create_timer(1.0, self.timer_callback)

        self.service = self.create_service(
            LoadPackage, 'load_package',
            self.load_package_callback)

        self.get_logger().info('Publisher and LoadPackage service started')

    def timer_callback(self):

        msg = DeliveryStatus()

        msg.robot_id = 'robot_01'
        msg.package_count = self.package_count
        msg.battery = 100.0
        msg.state = DeliveryStatus.STATE_IDLE

        self.publisher.publish(msg)

        self.get_logger().info(
            f'Published: Packages={msg.package_count}, '
            f'Battery={msg.battery}%')

    def load_package_callback(self, request, response):

        if request.weight > 10.0:
            response.accepted = False
            response.message = 'Package weight exceeds 10 kg'

        elif self.package_count >= 5:
            response.accepted = False
            response.message = 'Maximum limit of 5 packages reached'

        else:
            self.package_count += 1
            response.accepted = True
            response.message = 'Package loaded successfully'

        response.total_packages = self.package_count

        self.get_logger().info(response.message)

        return response


def main(args=None):

    rclpy.init(args=args)
    node = StatusPublisher()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()


if __name__ == '__main__':
    main()