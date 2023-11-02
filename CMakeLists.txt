cmake_minimum_required(VERSION 2.8.3)
project(youbot_kdl)

## System dependencies are found with CMake's conventions
find_package(Boost REQUIRED COMPONENTS system)
find_package(Eigen3 REQUIRED)

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
  include
  /usr/local/include
  /usr/include/eigen3
  ${Eigen_INCLUDE_DIRS}
  ${Boost_INCLUDE_DIRS}
)

## Declare a C++ library
add_library(youbot_kdl
   src/KDLInterface.cpp
 )

## Declare a C++ executable
add_executable(youbot_kdl_node src/youbot_kdl.cpp src/KDLInterface.cpp)

## Specify libraries to link a library or executable target against
target_link_libraries(youbot_kdl_node
  orocos-kdl
  kdl_parser
)