#ifndef COORDENADA_H
#define COORDENADA_H

class Coordenada {
    private:
        double x;
        double y;
    
    public:
        // Constructor con parámetros
        Coordenada(double valX, double valY);

        // getters
        double getX();
        double getY();

        //setters
        void setX(double val);
        void setY(double val);
};

#endif