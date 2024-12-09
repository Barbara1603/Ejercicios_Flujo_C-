//
// Created by barba on 12/12/2024.
//
#include <iostream>
#include "triangulo.h"
#include "circulo.h"



int main() {



    double base = 5.0, altura = 10.0, radio = 3.0;

    std::cout << "Área del triángulo: " << Geometria::calcularAreaTriangulo(base, altura) << std::endl;
    std::cout << "Área del círculo: " << Geometria::calcularAreaCirculo(radio) << std::endl;

    return 0;
}