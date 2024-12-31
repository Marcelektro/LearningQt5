cmake_minimum_required(VERSION 3.25)
project(LearningQt5)

set(CMAKE_CXX_STANDARD 20)

# find the Qt5 package on the system
find_package(Qt5 REQUIRED COMPONENTS Widgets)


add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)


if(WIN32)
    set_target_properties(${PROJECT_NAME} PROPERTIES WIN32_EXECUTABLE ON)
endif()
