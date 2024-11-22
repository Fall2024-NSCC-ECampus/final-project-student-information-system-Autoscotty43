cmake_minimum_required(VERSION 3.29)
project(JaredScott_StudentInformationSystem)

include_directories(include)

# Gather all .cpp files from the "src" directory
file(GLOB SOURCES "src/*.cpp")

set(CMAKE_CXX_STANDARD 20)

add_executable(JaredScott_StudentInformationSystem src/main.cpp
        include/Student.h
        include/StudentUtils.h
        include/GradingScheme.h
        src/Student.cpp
        src/StudentUtils.cpp
        src/GradingScheme.cpp)
