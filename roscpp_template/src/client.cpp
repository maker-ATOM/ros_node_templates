#include "ros/ros.h"
#include "<rossrv_package>/<rossrv>.h"

class <class_name>
{
public:
	<class_name>(ros::NodeHandle &nh) : nh_(nh)
	{
		// Client setup
		<client_instance> = nh_.serviceClient << rossrv_package>::<rossrv>>("<service_name>");

		// Request setup
		<rossrv_instance>.request.<sub_msg> = ;
	}

	void update()
	{
		// Call the service and check its availability
		if (<client_instance>.call(<rossrv_instance>))
		{
			// Process the received response
			ROS_INFO("Received result: %d", <rossrv_instance>.response.<sub_msg>);
		}
		else
		{
			ROS_WARN("Failed to call service...");
		}
	}


private:
	ros::NodeHandle nh_;
	ros::ServiceClient <client_instance>;
	<rossrv_package>::<rossrv> <rossrv_instance>;

};

int main(int argc, char **argv)
{
	// ROS initialization
	ros::init(argc, argv, "<node_name>");
	ros::NodeHandle nh;
    
    // Node setup
	<class_name> node(nh);

	node.update();

	ros::spin();

	return 0;
}