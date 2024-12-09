//
// Created by barba on 12/12/2024.
//
#include "flujos_cadenas.h"
#include <iostream>
#include <sstream>

void leerTextoDesdeCin(std::string& text) {
    std::cout << "Ingresa un texto: ";
    std::getline(std::cin, text);  // Leer una línea completa de texto
}

void procesarTextoConFlujo(const std::string& text) {
    std::stringstream ss;
    ss << text;

    std::string text_from_ss;
    std::getline(ss, text_from_ss);  // Leer toda la línea del stringstream

    std::cout << "El texto desde el flujo de cadena es: " << text_from_ss << std::endl;
}