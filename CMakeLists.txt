CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

# Main productoin executable
ADD_EXECUTABLE(task-scheduler
    src/main.cpp
    src/customer.cpp
)

# GTest testing executable
ADD_SUBDIRECTORY(googletest)
ADD_EXECUTABLE(test
    src/test.cpp
    src/customer.cpp
)
TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)