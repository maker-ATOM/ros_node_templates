#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "<rosmsg_package>/msg/<rosmsg>.hpp"

class<class_name> : public rclcpp::Node
{
public:
    <class_name>()
        : Node("<node_name>"), count_(0)
    {
        <publisher_instance> = this->create_publisher << rosmsg_package > ::msg:: < Rosmsg >> ("<pub_topic_name>", 10);
        timer_ = this->create_wall_timer(std::chrono::milliseconds(<duration>), std::bind(&<class_name>::timer_callback, this));
    }

private:
    void timer_callback()
    {
        auto <rosmsg_instance> = <rosmsg_package>::msg::<Rosmsg>();
        <rosmsg_instance>.<sub_msg> = <quantity>;

        <publisher_instance>->publish(<rosmsg_instance>);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher << rosmsg_package > ::msg:: < Rosmsg >> ::SharedPtr<publisher_instance>;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);

    rclcpp::spin(std::make_shared << class_name >> ());

    rclcpp::shutdown();
    return 0;
}