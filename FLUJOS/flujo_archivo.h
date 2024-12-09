//
// Created by barba on 12/12/2024.
//
#ifndef FLUJO_ARCHIVO_H
#define FLUJO_ARCHIVO_H

#include <fstream>  // Necesario para std::ofstream

// Declaración de funciones
void archivo();
void obtenerTexto(std::string &text);
void guardarEnArchivo(const std::string &text);

#endif //FLUJO_ARCHIVO_H