cmake_minimum_required(VERSION 3.10)
project(MySoccerManagerGame)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
set(SOURCE_FILES
        src/main.cpp
)

# Include directories
include_directories(include)
add_subdirectory(tests)

# Add third party libraries
# add_subdirectory(third_party/xxx)
add_subdirectory(third_party/googletest)

# Create the executable
add_executable(MySoccerManagerGame ${SOURCE_FILES})

# Link libraries
# target_link_libraries(MySoccerManagerGame)

# Specify the output directory for the build
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
