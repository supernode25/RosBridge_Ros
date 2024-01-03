cmake_minimum_required(VERSION 3.0.2)
project(rosbridge_ros)

find_package(catkin REQUIRED COMPONENTS
  cv_bridge
  roscpp
  rospy
  sensor_msgs 
  geometry_msgs
  std_msgs
  tf 
)

find_package(OpenCV REQUIRED)

catkin_package(
  # INCLUDE_DIRS include
  #LIBRARIES ros_opencv
  CATKIN_DEPENDS cv_bridge roscpp rospy sensor_msgs std_msgs geometry_msgs
#  DEPENDS system_lib
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(tfoi_node src/main.cpp src/image_class.cpp src/can_msg_class.cpp src/cmd_vel_class.cpp)
target_link_libraries(tfoi_node ${catkin_LIBRARIES})