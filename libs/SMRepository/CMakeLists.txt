# Create a static library for the repository
add_library(SMRepository STATIC
        ExampleRepository.cpp
        )

# Include directories
target_include_directories(SMRepository PUBLIC ${PROJECT_SOURCE_DIR}/include)