//
// Created by barba on 12/12/2024.
//

#include "flujo_archivo.h"
#include <iostream>
#include <fstream>

// Función para obtener el texto del usuario
void obtenerTexto(std::string& text) {
    std::cout << "Ingresa un texto: ";
    std::getline(std::cin, text);  // Leer una línea completa
}

// Función para guardar el texto en un archivo
void guardarEnArchivo(const std::string& text) {
    std::ofstream file;  // Crear un objeto ofstream para escribir en el archivo
    file.open("example.txt");  // Intentar abrir el archivo para escritura

    // Verificar si el archivo se abrió correctamente
    if (file) {
        file << text;  // Escribir el texto en el archivo
        std::cout << "El texto se guardó correctamente.\n";  // Mensaje de éxito
    } else {
        std::cerr << "No se pudo abrir el archivo.\n";  // Mensaje de error si no se pudo abrir
    }

    file.close();  // Cerrar el archivo después de escribir
}