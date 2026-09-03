cmake_minimum_required(VERSION 3.22)

project(PRFMultas)

add_library(PRFMultas SHARED
    src/main.cpp
)

target_link_libraries(PRFMultas
    log
)
