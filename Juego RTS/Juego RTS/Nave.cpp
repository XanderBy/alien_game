#include "Nave.h"


Nave::Nave(Sprite sprte, int vida, float x, float y, float vx, float vy, int ancho_nave, int alto_nave, Matriz<Modulo> modulos):Entidad(sprte, vida, x, y, vx, vy)
{
	this->ancho_nave = ancho_nave;
	this->alto_nave = alto_nave;
	this->modulos = Matriz<Modulo>(ancho_nave, alto_nave);
}

