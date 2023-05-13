cmake_minimum_required(VERSION 3.25)
project(Code_Learning C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Code_Learning
        main.c "C变量作用域/6-6 使用函数记账.c" "C变量作用域/6-7 随机函数(简).c")
