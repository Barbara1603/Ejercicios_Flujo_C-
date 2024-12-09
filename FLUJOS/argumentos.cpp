//
// Created by barba on 12/12/2024.
//

#include "argumentos.h"
#include <iostream>
#include <fstream>

void guardarTextoEnArchivo(const std::string& texto) {
    std::ofstream file;
    file.open("example.txt");  // Intentar abrir el archivo para escritura

    if (file) {
        file << texto;  // Escribir el texto en el archivo
        std::cout << "El texto se guardó correctamente.\n";  // Mensaje de éxito
    } else {
        std::cerr << "No se pudo abrir el archivo.\n";  // Si no se pudo abrir el archivo
    }

    file.close();  // Cerrar el archivo
}