## TEMPLATE FOR ROS NODES

Inlcudes:
- roscpp (ROS1) 
- rospy&nbsp; (ROS1)
- rclcpp (ROS2)
- rcppy&nbsp; (ROS2)

Paste the snippets in your and replace placeholders within your favorite editor.

### PlaceHolders

- `broadcaster_instance`: instance for your broadcaster
- `class_name`: Name for your class, e.g MyPublisher, MadwickFilter
- `frequency`: Frequency in Hz at which update method is executed as so published on the topic.
- `node_name`: Give some meaningful name for your node.
- `pub_topic_name`: Name of the topic on which your node publishes, subscribes, e.g cmd_vel, odom
- `publisher_instance`: Give some meaningful name for your publisher instance, e.g cmd_vel_pub_, filter_pub_
- `queue_size`: Size of queue if the rate of msg generation is more than publishment and in case of subscriber if msgs are not processed than they are received, e.g 10
- `rosmsg`: rosmsg to be used, e.g Int32, Twist
- `rosmsg_instance`: Class instance to store and publish rosmsg, e.g cmd_vel_, odom_
- `rosmsg_package`: Package which holds yours rosmsg, e.g std_msgs, geometry_msgs
- `rosmsg_ptr`: Pointer to received rosmsg
- `rossrv_package`: Package which defines the rossrv
- `server_instance`: instance to define server
- `service_callback`: callback for service request
- `sub_callback`: Class method to be invoked when a rosmsg is published in the subscribed topic.
- `time_interval`: time interval for timer in seconds, e.g 0.1 
- `timer_callback`: callback to be invoked when timer has elapsed.
- `timer_instance`: timer instance to setup timer.
- `timer_struct`: time struct to get information about the timing of the current timer
- `transform_instance`: instance to hold the information about transform to be published

---
 
Find something missing? consider creating a issue.

<!-- ### TODO

- [ ] package.xml check rosdep
- [ ] cmake.xml
- [x] Pub
- [x] Sub
- [x] Srv client
- [x] srv 
- [ ] Action srv
- [ ] action client
- [x] Wall timer
- [x] static
- [x] tf broadcasr
- [x] tf listner
- [ ] arrange placeholders cronologically -->