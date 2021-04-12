cmake_minimum_required(VERSION 3.19)
project(Team8Version2 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Team8Version2
        converting.c
        converting.h
        fundamentals.c
        fundamentals.h
        main.c
        manipulating.c
        manipulating.h
        tokenizing.c
        tokenizing.h)
