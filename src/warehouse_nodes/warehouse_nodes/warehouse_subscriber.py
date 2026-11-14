import rclpy
from rclpy.node import Node
from warehouse_interfaces.msg import DeliveryStatus


class StatusSubscriber(Node):

    def __init__(self):
        super().__init__('status_subscriber')

        self.subscription = self.create_subscription(
            DeliveryStatus,
            'delivery_status',
            self.callback,
            10
        )

    def callback(self, msg):

        self.get_logger().info(
            f'Robot: {msg.robot_id}, '
            f'Packages: {msg.package_count}, '
            f'Battery: {msg.battery}%, '
            f'State: {msg.state}'
        )


def main(args=None):
    rclpy.init(args=args)
    node = StatusSubscriber()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()


if __name__ == '__main__':
    main()