//
// Created by barba on 12/12/2024.
//

#include "ciencia.h"


namespace Ciencia {
    namespace Fisica {
        double calcularEnergia(double masa) {
            return masa * velocidadLuz * velocidadLuz;
        }
    }
}