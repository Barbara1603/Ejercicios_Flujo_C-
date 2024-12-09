//
// Created by barba on 09/12/2024.
//

#include <iostream>

namespace Matemáticas {
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }
}

int main() {
    int num1 = 5, num2 = 3;
    std::cout << "Suma: " << Matemáticas::suma(num1, num2) << std::endl;
    std::cout << "Resta: " << Matemáticas::resta(num1, num2) << std::endl;
    return 0;
}
