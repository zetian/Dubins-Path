# Include path
#include_directories(${CMAKE_SOURCE_DIR}/inc)
include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Dependency libraries
find_package(OpenCV REQUIRED)

add_executable(demo demo.cpp)
target_link_libraries(demo dubins)

#add_executable(test_dubins test_dubins.c)
#target_link_libraries(demo dubins)

#add_executable(test_dubins-cli test_dubins-cli.c)
#target_link_libraries(test_dubins-cli dubins)
