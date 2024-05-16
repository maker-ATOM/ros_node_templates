#include "ros/ros.h"
#include "<ros<server_instance>package>/<rossrv>.h"

class <class_name>
{
public:
	<class_name>(ros::NodeHandle &nh) : nh_(nh)
	{
		// Server setup
		<server_instance> = nh.advertiseService("<service_name>", <class_name>::<<service_callback>>);
	}

	static bool <<service_callback>>(<ros<server_instance>package>::<rossrv>::Request &req_, <ros<server_instance>package>::<rossrv>::Response &res_)
	{
		// Process the received request
		ROS_INFO("Received request: %d", req_.<sub_msg>);
		
		// Set the response
		res_.<sub_msg> = ;
		
		// If everything was successful 
		return true;
	}

private:
	ros::NodeHandle nh_;
	ros::Service<class_name> <server_instance>;
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