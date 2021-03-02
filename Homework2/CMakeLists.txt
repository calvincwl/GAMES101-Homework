cmake_minimum_required(VERSION 3.10)
project(Rasterizer)

set(OpenCV_DIR D:/Projects/opencv/build)
find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 17)

include_directories(D:/Projects ${OpenCV_INCLUDE_DIRS})

add_executable(Rasterizer main.cpp rasterizer.hpp rasterizer.cpp global.hpp Triangle.hpp Triangle.cpp)
target_link_libraries(Rasterizer ${OpenCV_LIBRARIES})
add_custom_command(TARGET Rasterizer POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "${OpenCV_DIR}/bin/$<CONFIGURATION>"
        $<TARGET_FILE_DIR:Rasterizer>)
