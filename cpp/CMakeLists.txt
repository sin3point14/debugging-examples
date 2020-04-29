cmake_minimum_required(VERSION 3.5)

# Set the project name
project (cpp_debug)

file(GLOB_RECURSE Sources src/**.cpp src/**.h)

add_executable(cpp_debug ${Sources})

target_include_directories(cpp_debug
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/src
)