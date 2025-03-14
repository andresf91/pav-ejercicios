#include "coordenada.h"

// Constructor con parámetros
Coordenada::Coordenada(double valX, double valY){
    x=valX;
    y=valY;
}

// getters
double Coordenada::getX(){
    return x;
}

double Coordenada::getY(){
    return y;
}

// setters
void Coordenada::setX(double val){
    this->x=val;
}

void Coordenada::setY(double val){
    this->y=val;
}