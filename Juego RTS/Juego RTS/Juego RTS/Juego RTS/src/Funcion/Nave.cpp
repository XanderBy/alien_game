#include "../Modelo/Nave.h"


Nave::Nave()
{
	this->ancho_nave = 0;
	this->alto_nave = 0;
	this->modulos = NULL;
}

Nave::Nave(Sprite sprte, int vida, float x, float y, float vx, float vy, int ancho_nave, int alto_nave, Modulo** modulos):Entidad(sprte, vida, x, y, vx, vy)
{
	this->ancho_nave = ancho_nave;
	this->alto_nave = alto_nave;
	this->modulos = new Modulo *[ancho_nave];
	for (size_t i = 0; i < alto_nave; i++) modulos[i] = new Modulo[alto_nave];
}

