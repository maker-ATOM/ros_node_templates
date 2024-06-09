#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "<rosmsg_package>/msg/<rosmsg>.hpp"
using std::placeholders::_1;

class <class_name> : public rclcpp::Node
{
  public:
    <class_name>()
    : Node("<node_name>")
    {
      <subscriber_instance> = this->create_subscription<<rosmsg_package>::msg::<Rosmsg>>(
      "<sub_topic_name>", 10, std::bind(&<class_name>::<sub_callback>, this, _1));
    }

  private:
    void <sub_callback>(const <rosmsg_package>::msg::<Rosmsg> & <rosmsg_ptr>) const
    {
      RCLCPP_INFO(this->get_logger(), "'%s'", <rosmsg_ptr>.data.c_str());
    }
    
    rclcpp::Subscription<<rosmsg_package>::msg::<Rosmsg>>::SharedPtr <subscriber_instance>;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);

  rclcpp::spin(std::make_shared<<class_name>>());
  
  rclcpp::shutdown();
  return 0;
}