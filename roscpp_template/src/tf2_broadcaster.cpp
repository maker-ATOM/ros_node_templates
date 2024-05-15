1// Required libraries
#include "ros/ros.h"
#include <tf2_ros/transform_broadcaster.h>
#include <tf2/LinearMath/Quaternion.h>
#include <geometry_msgs/TransformStamped.h>


class <class_name>
{
public:
    <class_name>(ros::NodeHandle &nh) : nh_(nh)
    {
    }

    void update()
    {
        // Transform to broadcast
        <transform_instance>.header.stamp = ros::Time::now();

        <transform_instance>.header.frame_id = "odom";
        <transform_instance>.child_frame_id = "base_link";

        <transform_instance>.transform.translation.x = 0.0;
        <transform_instance>.transform.translation.y = 1.0;
        <transform_instance>.transform.translation.z = 0.0;

        tf2::Quaternion quat;
        quat.setRPY(0.0, 1.57, 0.0);
        <transform_instance>.transform.rotation.x = quat.x();
        <transform_instance>.transform.rotation.y = quat.y();
        <transform_instance>.transform.rotation.z = quat.z();
        <transform_instance>.transform.rotation.w = quat.w();

        // Broadcast static tf once
        <broadcaster_instance>.sendTransform(<transform_instance>);
    }

private:
    ros::NodeHandle nh_;
    tf2_ros::TransformBroadcaster <broadcaster_instance>;

    geometry_msgs::TransformStamped <transform_instance>;

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
