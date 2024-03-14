cmake_minimum_required(VERSION 3.25)
project(meal_logger)

set(CMAKE_CXX_STANDARD 17)

add_executable(meal_logger main.cpp food.cpp food.h LogItem.cpp LogItem.h)
