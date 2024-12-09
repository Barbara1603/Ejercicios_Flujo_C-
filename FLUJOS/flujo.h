#ifndef FLUJO_H
#define FLUJO_H

#include <string>

// Declaración de las funciones
void pedirNumero(double& num);  // Ahora acepta un double
void pedirTexto(std::string& text);  // Función para pedir un texto
void mostrarResultado(double num);  // Función para mostrar el número con dos decimales
void mostrarResultados(double num, const std::string& text);  // Función para mostrar el número y el texto

#endif

