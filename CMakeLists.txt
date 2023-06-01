CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

project(PearDB)

# GTest testing executable
ADD_SUBDIRECTORY(googletest)
ADD_EXECUTABLE(test
    src/test.cpp
    src/customer.cpp
    src/phone.cpp
    src/plan.cpp
)
TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)