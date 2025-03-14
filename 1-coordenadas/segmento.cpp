#include "segmento.h"
#include "coordenada.h"
#include <math.h>

Segmento::Segmento(Coordenada ValP1, Coordenada ValP2) 
    : p1(ValP1), p2(ValP2) {}

Coordenada Segmento::getP1() {
    return this->p1;
}

Coordenada Segmento::getP2() {
    return this->p2;
}

void Segmento::setP1(double p1X, double p1Y) {
    p1.setX(p1X);
    p1.setY(p1Y);
}

void Segmento::setP2(double p2X, double p2Y){
    p2.setX(p2X);
    p2.setY(p2Y);
}

double Segmento::largoSegmento(Coordenada c1, Coordenada c2) {
    double n,p;

    n = c1.getX() - c2.getX();
    p = c1.getY() - c2.getY();

    return sqrt(n*n+p*p);

}