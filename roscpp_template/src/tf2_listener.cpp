// Required libraries
#include "ros/ros.h"
#include <tf2_ros/transform_listener.h>
#include <geometry_msgs/TransformStamped.h>


class <class_name>
{
public:
    <class_name>(ros::NodeHandle &nh) : nh_(nh), tfListener(tfBuffer)
    {
    }

    void update()
    {
        try
        {
            // Gewt latest tranform
            <transform_instance> = tfBuffer.lookupTransform("odom", "base_link", ros::Time(0));
            std::cout << <transform_instance>.transform.translation.x << std::endl;
        }
        catch (tf2::TransformException &ex)
        {
            ROS_WARN("%s", ex.what());
        }
    }

private:
    ros::NodeHandle nh_;
    tf2_ros::Buffer tfBuffer;
    tf2_ros::TransformListener tfListener;

    geometry_msgs::TransformStamped <transform_instance>;

};

int main(int argc, char **argv)
{
    // ROS initialization
    ros::init(argc, argv, "node_name");
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
