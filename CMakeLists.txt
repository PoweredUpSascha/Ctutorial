cmake_minimum_required(VERSION 3.26)
project(Ctutorial C)

set(CMAKE_C_STANDARD 11)

add_executable(Ctutorial helloworld.h
        header.h
        datatypes.h
        inputoutput.h
        controlstructures.h
        operators.h
        functions.h
        arrays.h
        switch.h
        main.c)
