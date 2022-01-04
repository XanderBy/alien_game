#pragma once
#include "Entidad.h"
#include "Modulo.h"

class Nave : public Entidad
{
private:
    //la x 0 es el frente de la nave y la ultima x es la cola de la nave
    int ancho=0;
    int alto=0;
    Modulo modulos_nave [][];

public:

    Nave(Sprite sprte, int vida, float x, float y, float vx, float vy);
    
};