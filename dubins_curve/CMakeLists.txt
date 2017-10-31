# Include path
#include_directories(${CMAKE_SOURCE_DIR}/inc)
include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Add libraries
set(DUBINS_LIB_SRC
	dubins_curve.cpp
)
add_library(dubins STATIC ${DUBINS_LIB_SRC})
target_link_libraries(dubins)


