# Create a test executable
set(TEST_SOURCES
        test_main.cpp
        )

add_executable(RunUnitTests ${TEST_SOURCES})

# Link test executable against gtest & gtest_main
target_link_libraries(RunUnitTests gtest gtest_main)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add test target
enable_testing()
add_test(NAME RunUnitTests COMMAND RunUnitTests)