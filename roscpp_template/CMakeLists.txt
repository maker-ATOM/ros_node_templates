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

add_executable(<executable> src/<executable>.cpp)

target_link_libraries(<executable>
  ${catkin_LIBRARIES}
)