cmake_minimum_required(VERSION 3.23)
project(i3BlankWindow C)

set(CMAKE_C_STANDARD 99)

add_executable(i3BlankWindow main.c)

target_link_libraries(${PROJECT_NAME} -lm)
target_link_libraries(${PROJECT_NAME} -lraylib)

set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "blank_window")
