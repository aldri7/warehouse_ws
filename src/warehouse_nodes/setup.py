from setuptools import find_packages, setup

package_name = 'warehouse_nodes'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='aldrin',
    maintainer_email='aldrinthannikot@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'warehouse__publisher = warehouse_nodes.warehouse_publisher:main',
            'warehouse__subscriber = warehouse_nodes.warehouse_subscriber:main',
            'deliver_server = warehouse_nodes.deliver_server:main',
            'deliver_client = warehouse_nodes.deliver_client:main',
        ],
    },
)
