// Required libraries
#include "iostream"
#include "ros/ros.h"

class <class_name>
{
public:
    <class_name>(ros::NodeHandle &nh) : nh_(nh)
    {
        // Timer Setup
        <timer_instance> = nh_.createTimer(ros::Duration(<timer_interval>), &<class_name>::<timer_callback>, this);
    }

    void <timer_callback>(const ros::TimerEvent& <timer_struct>)
    {

        // Display information about the timing of the current timer
        ros::Time current_time = <timer_struct>.current_expected;
        ROS_INFO("Timer expected to triggered at: %f", current_time.toSec());

        // Perform task here
    }


private:
    ros::NodeHandle nh_;
    ros::Timer <timer_instance>;
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
