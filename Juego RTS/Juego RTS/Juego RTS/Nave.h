
#include "Entidad.h"
#include "Modulo.h"
#include "Matriz.h"

#ifndef Nave_HEADER
#define Nave_HEADER

class Nave : public Entidad
{
private:

    int ancho_nave;
    int alto_nave;
    Matriz<Modulo> modulos;

public:

    Nave(Sprite sprte, int vida, float x, float y, float vx, float vy, int ancho_nave, int alto_nave, Matriz<Modulo> modulos);
    
};

#endif