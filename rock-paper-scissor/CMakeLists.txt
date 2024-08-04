cmake_minimum_required(VERSION 3.29)
project(rock_paper_scissor)

set(CMAKE_CXX_STANDARD 26)
include_directories(include)
add_executable(
        rock_paper_scissor
        src/main.cpp
        src/sign.cpp
        src/game.cpp
        src/player.cpp
)
