#ifndef SEGMENTO_H
#define SEGMENTO_H

#include "coordenada.h"

class Segmento {
    private:
        Coordenada p1;
        Coordenada p2;
    
        public:
            Coordenada getP1();
            Coordenada getP2();
            void setP1(Coordenada p);
            void setP2(Coordenada p);
            double largoSegmento(Coordenada c1, Coordenada c2);
};

#endif