cmake_minimum_required(VERSION 3.10)

project(low_latency_exchange VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(exchange
    src/main.cpp
)

target_include_directories(exchange
    PRIVATE
        include
)