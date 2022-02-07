

#ifndef Nave_H
#define Nave_H

#include "Entidad.h"
#include "Modulo.h"

class Nave : public Entidad
{
private:

    int ancho_nave;
    int alto_nave;
    Modulo** modulos;

public:

    Nave(void);
    Nave(Sprite sprte, int vida, float x, float y, float vx, float vy, int ancho_nave, int alto_nave, Modulo** modulos);
    
};

#endif