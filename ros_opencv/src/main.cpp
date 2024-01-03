#include "ros_opencv/image_class.h"
#include "can_msg/can_msg_class.h"
#include "cmd_vel/cmd_vel_class.h"

int main(int argc, char**argv)
{
    
    ros::Publisher cmd_vel_pub;
    ros::init(argc, argv, "tfoi_node");
    //ros::NodeHandle n;
    D435_Image d435_image;
    Tfoi_Can_Data tfoi_can_data;
    Cmd_Vel cmd_vel;

        
    //cmd_vel_pub = n.advertise<geometry_msgs::Twist>("/cmd_vel", 1000);

    //ros::spin();
    ros::Rate rate(30);

    while(ros::ok())
    {
        
        
        ros::spinOnce();
        
    }

    return 0;
}