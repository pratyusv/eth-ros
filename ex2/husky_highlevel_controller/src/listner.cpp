#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"

void callback(const sensor_msgs::LaserScan::ConstPtr& message){
	ROS_INFO("Message : [%f]",message->angle_min);
}

int main(int argc, char** argv){

	ros::init(argc,argv,"listner");
	ros::NodeHandle nodeHandle;

	ros::Subscriber sub = nodeHandle.subscribe<sensor_msgs::LaserScan>("scan",1,callback);
	ros::spin();
	return 0;
}
