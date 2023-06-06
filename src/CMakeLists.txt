CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

project(PearDB)

# GTest testing executable
enable_testing() #to  discover tests in test explorer 
ADD_SUBDIRECTORY(googletest)
include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>
ADD_EXECUTABLE(myTests
    myTests.cpp
    customer.cpp
)
ADD_EXECUTABLE(demo
main.cpp
phone.cpp
customer.cpp
sort.cpp
plan.cpp
)
TARGET_LINK_LIBRARIES(myTests gtest)
TARGET_COMPILE_DEFINITIONS(myTests PRIVATE gtest_disable_pthreads=ON)