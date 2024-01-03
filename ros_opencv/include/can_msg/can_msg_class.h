#ifndef __CAN_MSG_CLASS_H_
#define __CAN_MSG_CLASS_H_

#include <ros/ros.h>
#include <std_msgs/String.h>
#include <std_msgs/UInt8.h>


class Tfoi_Can_Data
{
    ros::NodeHandle n;
    ros::Publisher tfoi_can_pub;
    ros::Subscriber tfoi_can_sub;
    
    

public:
    Tfoi_Can_Data();
    void tfoiDataCallback(const std_msgs::UInt8::ConstPtr& can_msg);
    
    ~Tfoi_Can_Data();
};

#endif