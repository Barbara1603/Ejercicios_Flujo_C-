//
// Created by barba on 10/12/2024.
//

#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {
    // Vector
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    numeros.push_back(6); // Agregar elemento
    std::cout << "Vector: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Map
    std::map<std::string, int> edades;
    edades["Lisa"] = 25;
    edades["Jennie"] = 28;
    edades["Juana"] = 22;
    std::cout << "Map: ";
    for (const auto& par : edades) {
        std::cout << par.first << " tiene " << par.second << " años. ";
    }
    std::cout << std::endl;

    // Buscar un elemento en el map
    std::string nombre = "Jennie";
    if (edades.find(nombre) != edades.end()) {
        std::cout << nombre << " está en el map y tiene " << edades[nombre] << " años." << std::endl;
    } else {
        std::cout << nombre << " no está en el map." << std::endl;
    }

    // Set
    std::set<int> conjunto = {1, 2, 3, 4, 5};
    conjunto.insert(6); // Agregar elemento
    conjunto.erase(3);  // Eliminar elemento
    std::cout << "Set: ";
    for (int num : conjunto) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Buscar un elemento en el set
    int valor = 4;
    if (conjunto.find(valor) != conjunto.end()) {
        std::cout << valor << " está en el set." << std::endl;
    } else {
        std::cout << valor << " no está en el set." << std::endl;
    }

    return 0;
}