cmake_minimum_required(VERSION 3.29)
project(Ejercicios_Flujo_C_)

set(CMAKE_CXX_STANDARD 14)



add_executable(Ejercicios_Flujo_C_
    EJERCICIO_1/main_1.cpp
)

add_executable(Ejercicios_Flujo_C_2 EJERCICIO_2/triangulo.cpp
        EJERCICIO_2/triangulo.cpp
        EJERCICIO_2/triangulo.h
        EJERCICIO_2/circulo.cpp
        EJERCICIO_2/circulo.h
        EJERCICIO_2/main_2.cpp
)

add_executable(Ejercicios_Flujo_C_3 EJERCICIO_3/main_3.cpp
        EJERCICIO_3/circulo_3.cpp
        EJERCICIO_3/circulo_3.h)

add_executable(Ejercicios_Flujo_C_4
        EJERCICIO_4/ciencia.cpp
        EJERCICIO_4/ciencia.h
        EJERCICIO_4/main_4.cpp)

add_executable(Ejercicios_Flujo_C_5 EJERCICIO_5/main_5.cpp)

add_executable(Ejercicios_Flujo_C_6
        FLUJOS/main_Flujo.cpp
        FLUJOS/flujo.cpp
        FLUJOS/flujo.h
        FLUJOS/flujo_estado.cpp
        FLUJOS/flujo_estado.h
        FLUJOS/flujo_archivo.cpp
        FLUJOS/flujo_archivo.h
        FLUJOS/flujos_cadenas.cpp
        FLUJOS/flujos_cadenas.h
        FLUJOS/argumentos.cpp
        FLUJOS/argumentos.h
)

