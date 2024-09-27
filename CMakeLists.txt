cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Calculator)

# Add the executable
add_executable(Calculator calculator.cpp)

# Add Google Test
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add test executable
add_executable(test_calculator test_calculator.cpp)
target_link_libraries(test_calculator ${GTEST_LIBRARIES} pthread)

# Add test
add_test(NAME test_calculator COMMAND test_calculator)
