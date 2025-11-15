cmake_minimum_required(VERSION 3.25)
project(10aBattleBot)

set(CMAKE_CXX_STANDARD 20)

add_executable(10aBattleBot
        CBattleBox.cpp
        CMenu.cpp
        CRobot.cpp
        main.cpp)
