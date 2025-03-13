#ifndef COORDENADA_H
#define COORDENADA_H

class Coordenada {
    private:
        double x;
        double y;
    
    public:
        double getX();
        double getY();
        void setX(double val);
        void setY(double val);
};

#endif