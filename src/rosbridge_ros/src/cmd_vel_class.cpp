#include "cmd_vel_class.h"

Cmd_Vel::Cmd_Vel()
{

    cmd_vel_sub = n.subscribe("/cmd_vel", 1000, &Cmd_Vel::cmdVelCallBack, this);
    
    
};

void Cmd_Vel::cmdVelCallBack(const geometry_msgs::Twist::ConstPtr& cmd_vel)
{
   // std::chrono::system_clock::time_point now = st::chrono::system_clock::now();
   // std::chrono::duration<double> dt = now - cmd_move_time;
    
};

Cmd_Vel::~Cmd_Vel() {}