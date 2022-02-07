#include "../Modelo/Entidad.h"
#include "../Modelo/Sprite.h"


Entidad::Entidad()
{
	this->sprte = Sprite();
	this->vida = 10;
	this->x = 0;
	this->y = 0;
	this->vx = 0;
	this->vy = 0;
}

Entidad::Entidad(Sprite sprte, int vida, float x, float y, float vx, float vy)
{
	this -> sprte = sprte;
	this -> vida = vida;
	this -> x = x;
	this -> y = y;
	this -> vx = vx;
	this -> vy = vy;

}


void Entidad::dibujar()
{
	al_draw_bitmap_region(sprte.hoja.hja, sprte.x, sprte.y, sprte.ancho, sprte.alto, x, y, 0);
}

bool Entidad::colision()
{
	return false;
}

void Entidad::movimiento()
{
}
