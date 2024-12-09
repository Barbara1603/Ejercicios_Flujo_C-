#include <iostream>
#include <string>
#include <iomanip>  // Para std::fixed y std::setprecision
#include "flujo.h"

// Función para pedir un número
void pedirNumero(double& num) {  // Ahora pasamos el número por referencia de tipo double
    std::cout << "Ingresa un número: ";
    std::cin >> num;
}

// Función para pedir un texto
void pedirTexto(std::string& text) {
    std::cout << "Ingresa un texto: ";
    std::cin.ignore();  // Limpiar el buffer de entrada
    std::getline(std::cin, text);  // Leer toda la línea
}

// Función para mostrar el número con dos decimales
void mostrarResultado(double num) {
    std::cout << "El número ingresado es: " << std::fixed << std::setprecision(2) << num << std::endl;
}

// Función para mostrar el número con texto
void mostrarResultados(double num, const std::string& text) {
    std::cout << "El número ingresado es: " << std::fixed << std::setprecision(2) << num << std::endl;
    std::cout << "El texto ingresado es: " << text << std::endl;
}
