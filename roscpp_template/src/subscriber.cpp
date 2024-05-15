// Required libraries
#include "iostream"
#include "ros/ros.h"
#include "<rosmsg_package>/<rosmsg>.h"

class <class_name>
{
public:
    <class_name>(ros::NodeHandle &nh) : nh_(nh)
    {
        // Subscriber setup
        <subscriber_instance> = nh_.subscribe("<sub_topic_name>", <queue_size>, &<class_name>::<sub_callback>, this);

    }

    void <sub_callback>(const <rosmsg_package>::<rosmsg>::ConstPtr &<rosmsg_ptr>)
    {
        // Use your received rosmsg here
        std::cout << <rosmsg_ptr>-><sub_msg> << std::endl;
    }


private:
    ros::NodeHandle nh_;
    ros::Subscriber <subscriber_instance>;
};

int main(int argc, char **argv)
{
    // ROS initialization
    ros::init(argc, argv, "<node_name>");
    ros::NodeHandle nh;

    // Node setup
    <class_name> node(nh);

    ros::spin();


    return 0;
}
