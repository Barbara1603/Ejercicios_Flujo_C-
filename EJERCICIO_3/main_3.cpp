//
// Created by barba on 10/12/2024.
//
#include <iostream>
#include "circulo_3.h"
#include <locale.h>
int main() {

    setlocale(LC_ALL, "spanish");
    double radio;
    std::cout << "Ingrese el radio del círculo: ";
    std::cin >> radio;

    Geometria::Circulo circulo(radio);

    std::cout << "Área del círculo: " << circulo.calcularArea() << std::endl;
    std::cout << "Perímetro del círculo: " << circulo.calcularPerimetro() << std::endl;

    return 0;
}