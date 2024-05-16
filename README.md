## TEMPLATE FOR ROS NODES

Inlcudes:
- roscpp (ROS1) 
- rospy&nbsp; (ROS1)
- rclcpp (ROS2)
- rcppy&nbsp; (ROS2)

Paste the snippets in your and replace placeholders within your favorite editor.

### PlaceHolders

- `rosmsg_package`: Package which holds yours rosmsg, e.g std_msgs, geometry_msgs
- `rosmsg`: rosmag to be used, e.g Int32, Twist
- `class_name`: Name for your class, e.g MyPublisher, MadwickFilter
- `publisher_instance`: Give some meaningfull name for your publisher instance, e.g cmd_vel_pub_, filter_pub_
- `pub_topic_name`: Name of the topic on which your node publishes, subscribes, e.g cmd_vel, odom
- `queue_size`: Size of queue if the rate of msg generation is more than publishment and in case of subscriber if msgs are not process than they are received, e.g 10
- `rosmsg_instance`: Class instance to store and publish rosmsg, e.g cmd_vel_, odom_
- `node_name`: Give some meaningfull name for your node.
- `frequency`: Frequncy in Hz at which update method is executed as so published on the topic.
- `rosmsg_ptr`: Pointer to received rosmsg
- `sub_callback`: Class method to be invoked when a rosmag is published in the subscribed topic.
- `timer_callback`: callback to be invoked when timer has elapsed.
- `time_interval`: time interval for timer in seconds, e.g 0.1 
- `timer_struct`: time struct to get information about the timing of the current timer
- `timer_instance`: timer instance to setup timer.
- `transform_instance`:  instance to hold the infomation about transform to be published
- `broadcaster_instance`: instance for your broadcaster
- `server_instance`: isntance to defien server
- `rossrv_package`: Package which defines the rossrv
- `service_callback`

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