cmake_minimum_required(VERSION 2.8) 
PROJECT ( ObjectTracking )
find_package(OpenCV REQUIRED )
set( NAME_SRC
    src/multipleObjectTracking.cpp  
    src/PingPongball.cpp
)

set( NAME_HEADERS       
     include/PingPongball.h
)


INCLUDE_DIRECTORIES( ${CMAKE_CURRENT_SOURCE_DIR}/include )
link_directories( ${CMAKE_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
add_executable(ObjectTracking  ${NAME_SRC} ${NAME_HEADERS} )

target_link_libraries( ObjectTracking  opencv_core opencv_dnn opencv_features2d opencv_flann opencv_highgui opencv_imgcodecs)