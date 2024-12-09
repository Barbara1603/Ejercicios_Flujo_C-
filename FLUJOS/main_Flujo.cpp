#include <iostream>
#include "flujo.h"  // Incluir el encabezado del programa
#include "flujo_estado.h"  // Incluir el encabezado del programa
#include "flujo_archivo.h"  // Incluir el encabezado del programa
#include "flujos_cadenas.h"
#include "argumentos.h"  // Incluir el encabezado del programa

int main(int argc, char* argv[]) {
    double num;          // Cambiar a double para manejar decimales
    std::string text;    // Variable para el texto

    // Ejecutar solo la parte de número con decimales y texto
    std::cout << "Ejecutando la parte de número con dos decimales y texto\n";
    std::cout << "\n";

    pedirNumero(num);
    pedirTexto(text);
    mostrarResultados(num, text);

    // Ejecutar la parte del primer programa (flujo de estado)
    std::cout << "\nEjecutando la parte de flujo de estado\n";
    std::cout << "\n";
    std::ifstream file;

    abrirArchivo(file);
    verificarArchivo(file);
    cerrarArchivo(file);

    // Ejecutar la parte del tercer programa (flujo de archivo)
    std::cout << "\nEjecutando la parte de flujo de archivo\n";
    std::cout << "\n";

    obtenerTexto(text);
    guardarEnArchivo(text);

    // Ejecutar la parte del cuarto programa (flujo de cadenas)
    std::cout << "\nEjecutando la parte de flujo de cadenas\n";
    std::cout << "\n";
    leerTextoDesdeCin(text);
    procesarTextoConFlujo(text);

    if (argc < 2) {
        std::cerr << "Por favor, proporciona un argumento de texto.\n";
        return 1;
    }

    // Llamada a la función para guardar el primer argumento en el archivo
    guardarTextoEnArchivo(argv[1]);

    return 0;
}