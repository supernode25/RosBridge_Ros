#include "can_msg/can_msg_class.h"

Tfoi_Can_Data::Tfoi_Can_Data()
{

    tfoi_can_sub = n.subscribe("/tfoi_data_sub", 1000, &Tfoi_Can_Data::tfoiDataCallback, this);
    
    tfoi_can_pub = n.advertise<std_msgs::String>("/tfoi_data_pub", 1);


};

void Tfoi_Can_Data::tfoiDataCallback(const std_msgs::UInt8::ConstPtr& can_msg)
{
    tfoi_can_pub.publish(can_msg);
};

Tfoi_Can_Data::~Tfoi_Can_Data() {}