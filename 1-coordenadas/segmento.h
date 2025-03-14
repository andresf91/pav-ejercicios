#ifndef SEGMENTO_H
#define SEGMENTO_H

#include "coordenada.h"

class Segmento {
    private:
        Coordenada p1;
        Coordenada p2;
    
        public:
            Segmento(Coordenada ValP1, Coordenada ValP2);
            Coordenada getP1();
            Coordenada getP2();
            void setP1(double p1X, double p1Y);
            void setP2(double p2X, double p2Y);
            double largoSegmento(Coordenada c1, Coordenada c2);
};

#endif