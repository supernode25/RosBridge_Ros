#ifndef __CMD_VEL_CLASS_H_
#define __CMD_VEL_CLASS_H_

#include <ros/ros.h>
#include <geometry_msgs/Twist.h>


class Cmd_Vel
{
    ros::NodeHandle n;
    
    ros::Subscriber cmd_vel_sub;

    double time_for_stop_to_not_cmd = 2.0;
    bool set_stop_for_no_cmd = true;

    double cmd_move_time = 0.0;
    double wheel_base = 0.0;
    double wheel_size = 0.0;
    double PPR = 0.0;
    double gear_ratio = 0.0;
    double rpm2vel = (wheel_size * 3.141592) / (60 * gear_ratio);
    double pulse2dist = (wheel_size * 3.141592) / PPR / gear_ratio;
       

public:
    Cmd_Vel();
    void cmdVelCallBack(const geometry_msgs::Twist::ConstPtr& cmd_vel);    
    
    ~Cmd_Vel();
};

#endif