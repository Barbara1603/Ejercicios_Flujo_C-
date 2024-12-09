//
// Created by barba on 12/12/2024.
//

#include "circulo_3.h"

#include <cmath>

namespace Geometria {
    Circulo::Circulo(double r) : radio(r) {}

    double Circulo::calcularArea() const {
        return M_PI * radio * radio;
    }

    double Circulo::calcularPerimetro() const {
        return 2 * M_PI * radio;
    }
}