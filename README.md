# 🤖 Warehouse Delivery Robot – ROS 2

## 📌 About the Project

This project demonstrates a Warehouse Delivery Robot system developed using ROS 2 and Python.

The system uses custom ROS 2 Messages, Services, and Actions to manage package loading, publish robot status, and perform automated delivery tasks.

It demonstrates the practical implementation of ROS 2 communication mechanisms through multiple Python nodes and custom interfaces.

## 🚀 Features

- Publishes robot status every second using a Publisher.
- Receives and displays robot status using a Subscriber.
- Accepts packages weighing up to 10 kg.
- Allows a maximum of 5 packages.
- Rejects packages that exceed the weight or package limit.
- Uses ROS 2 Services for package loading.
- Performs delivery tasks using ROS 2 Actions.
- Provides continuous delivery feedback.
- Displays remaining distance and delivery completion percentage.
- Validates delivery goals and rejects invalid requests.

## 🛠️ Technologies Used

- ROS 2
- Python
- Ubuntu Linux
- rclpy
- Custom ROS 2 Interfaces
- Topics, Services, and Actions

## 📂 Project Structure

```text
warehouse_ws/
│
├── src/
│   │
│   ├── warehouse_interfaces/
│   │   ├── action/
│   │   │   └── Deliver.action
│   │   ├── msg/
│   │   │   └── DeliveryStatus.msg
│   │   ├── srv/
│   │   │   └── LoadPackage.srv
│   │   ├── CMakeLists.txt
│   │   └── package.xml
│   │
│   └── warehouse_nodes/
│       ├── warehouse_nodes/
│       │   ├── __init__.py
│       │   ├── warehouse_publisher.py
│       │   ├── warehouse_subscriber.py
│       │   ├── deliver_server.py
│       │   └── deliver_client.py
│       │
│       ├── resource/
│       │   └── warehouse_nodes
│       ├── test/
│       ├── package.xml
│       ├── setup.cfg
│       └── setup.py
│
├── .gitignore
└── README.md
```

## ⚙️ ROS 2 Communication

This project implements three major ROS 2 communication mechanisms.

### 1. Topics (Publisher & Subscriber)

- The Publisher continuously publishes robot status.
- The Subscriber receives and displays the published status.
- Status updates are published every second.

### 2. Services (Client & Server)

- Handles package loading requests.
- Checks package weight and package count.
- Accepts packages within the defined limits.
- Rejects invalid package loading requests.

### 3. Actions (Action Client & Server)

- Handles warehouse delivery tasks.
- Accepts delivery goals such as destination, distance, and speed.
- Provides continuous feedback during delivery.
- Displays remaining distance and completion percentage.
- Returns the final delivery result.
- Rejects invalid delivery goals, including zero distance.

## 🧪 Testing

The following tests were performed:

- Publisher and Subscriber communication.
- Successful package loading.
- Rejection of packages exceeding the 10 kg weight limit.
- Rejection after reaching the maximum package limit of 5.
- Successful delivery using ROS 2 Actions.
- Continuous delivery feedback.
- Delivery completion result.
- Rejection of invalid delivery goals, including zero distance.

## 💻 Installation and Execution

### 1. Clone the Repository

```bash
git clone <YOUR_GITHUB_REPOSITORY_URL>
```

### 2. Navigate to the Workspace

```bash
cd warehouse_ws
```

### 3. Build the Packages

```bash
colcon build
```

### 4. Source the Workspace

```bash
source install/setup.bash
```

### 5. Run the Publisher

Open a new terminal:

```bash
source install/setup.bash
ros2 run warehouse_nodes warehouse_publisher
```

### 6. Run the Subscriber

Open another terminal:

```bash
source install/setup.bash
ros2 run warehouse_nodes warehouse_subscriber
```

### 7. Run the Service and Action Nodes

Run the service server/client and action server/client in separate terminals using their corresponding executable names.

Make sure to source the workspace in each terminal before running the nodes.

## 🎯 Learning Outcomes

Through this project, I gained practical experience in:

- Creating custom ROS 2 Messages, Services, and Actions.
- Developing Python-based ROS 2 nodes.
- Implementing Publisher-Subscriber communication.
- Understanding Service Client-Server architecture.
- Implementing Action Client-Server communication.
- Managing multiple ROS 2 packages.
- Building and executing ROS 2 workspaces using Colcon.
- Understanding ROS 2 inter-node communication.

## 📝 Conclusion

The Warehouse Delivery Robot project demonstrates the practical implementation of ROS 2 communication mechanisms in a warehouse automation scenario.

It provides hands-on experience with custom interfaces, Python-based nodes, package management, and automated delivery workflows.

This project helped strengthen my understanding of ROS 2 Topics, Services, and Actions through practical implementation.

---

**Project:** Warehouse Delivery Robot
**Platform:** ROS 2
**Programming Language:** Python 
**Operating System:** Ubuntu Linux
