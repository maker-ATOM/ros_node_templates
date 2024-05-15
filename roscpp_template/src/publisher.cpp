// Required libraries
#include "ros/ros.h"
#include "<rosmsg_package>/<rosmsg>.h"

class <class_name>
{
public:
    <class_name>(ros::NodeHandle &nh) : nh_(nh)
    {
        // Publisher setup
        <publisher_instance> = nh_.advertise <<rosmsg_package>::<rosmsg>>("<pub_topic_name>", <queue_size>);

    }

    void update()
    {
        // Publish ROS messages here
        <rosmsg_instance>.<sub_msg> = <quantity>;
        <publisher_instance>.publish(<rosmsg_instance>);
    }

private:
    ros::NodeHandle nh_;
    ros::Publisher <publisher_instance>;

    <rosmsg_package>::<rosmsg> <rosmsg_instance>;
};

int main(int argc, char **argv)
{
    // ROS initialization
    ros::init(argc, argv, "<node_name>");
    ros::NodeHandle nh;

    // Node setup
    <class_name> node(nh);

    // Main loop
    ros::Rate loop_rate(<frequency>);
    while (ros::ok())
    {
        node.update();
        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}
