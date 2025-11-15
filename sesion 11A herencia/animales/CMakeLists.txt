cmake_minimum_required(VERSION 3.25)
project(10aHerenciaAnimales)

set(CMAKE_CXX_STANDARD 20)

add_executable(10aHerenciaAnimales
        CAlimento.cpp
        CAnimal.cpp
        CAve.cpp
        CDomestico.cpp
        CFelino.cpp
        CGallina.cpp
        CGato.cpp
        CMamifero.cpp
        CPerro.cpp
        main.cpp)
