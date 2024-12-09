//
// Created by barba on 12/12/2024.
//
#include "flujo_estado.h"
#include <iostream>
#include <fstream>

// Función para abrir el archivo
void abrirArchivo(std::ifstream& file) {
    file.open("example.txt");  // Intentar abrir el archivo
}

// Función para verificar si el archivo se abrió correctamente
void verificarArchivo(std::ifstream& file) {
    if (!file) {
        std::cerr << "No se pudo abrir el archivo.\n";  // Si no se pudo abrir el archivo
    } else {
        std::cout << "El archivo se abrió correctamente.\n";  // Si se abrió correctamente
    }
}

// Función para cerrar el archivo
void cerrarArchivo(std::ifstream& file) {
    file.close();  // Cerrar el archivo
}