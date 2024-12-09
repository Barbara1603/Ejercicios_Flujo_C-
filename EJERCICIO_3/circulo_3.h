//
// Created by barba on 12/12/2024.
//

#ifndef CIRCULO_3_H
#define CIRCULO_3_H

namespace Geometria {
    class Circulo {
    public:
        Circulo(double r);
        double calcularArea() const;
        double calcularPerimetro() const;
    private:
        double radio;
    };
}

#endif //CIRCULO_3_H
