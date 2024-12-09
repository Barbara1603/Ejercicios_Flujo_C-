//
// Created by barba on 12/12/2024.
//
#include <iostream>
#include "ciencia.h"

int main() {
    double masa;
    std::cout << "Ingrese la masa en kilogramos: ";
    std::cin >> masa;

    double energia = Ciencia::Fisica::calcularEnergia(masa);
    std::cout << "La energía es: " << energia << " julios" << std::endl;

    return 0;
}