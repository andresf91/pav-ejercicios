#include "segmento.h"
#include "coordenada.h"
#include <math.h>

Coordenada Segmento::getP1() {
    return this->p1;
};

Coordenada Segmento::getP2() {
    return this->p2;
};

void Segmento::setP1(Coordenada p) {
    Segmento::p1 = p;
};

void Segmento::setP2(Coordenada p){
    Segmento::p2 = p;
};

double Segmento::largoSegmento(Coordenada c1, Coordenada c2) {
    double n,p;

    n = c1.getX() - c2.getX();
    p = c1.getY() - c2.getY();

    return sqrt(n*n+p*p);

};