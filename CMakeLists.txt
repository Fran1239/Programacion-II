cmake_minimum_required(VERSION 3.21)
project(BatallaNaval)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(BatallaNaval
        .idea/.gitignore
        .idea/BatallaNaval.iml
        .idea/discord.xml
        .idea/modules.xml
        .idea/workspace.xml
        juego.cpp
        juego.h
        main_BatallaNaval.cpp
        tablero.cpp
        tablero.h)
