cmake_minimum_required(VERSION 3.0.2)
project(roscpp_template)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  tf2_ros
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

catkin_package()

add_executable(subscriber src/tf2_listener.cpp)

target_link_libraries(subscriber
  ${catkin_LIBRARIES}
)