cmake_minimum_required(VERSION 3.31)
project(Lab202)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab202
        CAlumno.cpp
        8bEjem1.cpp
        CProfesor.cpp
        CProfesor.h
)

add_executable(Lab202_inmueble
        Inmueble.cpp
        8aEjer2_inmueble.cpp
)
add_executable(Lab202_cvector
        CVector.cpp
        8bEjer4_cvector.cpp
)
add_executable(Lab202_complejo
        Complejo.cpp
        9aEjer1_Complejo.cpp
)
add_executable(9a3 CAlumno.cpp CProfesor.cpp 9aEjer3_punteros.cpp)
add_executable(9a4_tvector 9aEjer4_tvector.cpp)
add_executable(9b1_curso 9bEjer1_curso.cpp CAlumno.cpp CCurso.cpp)

