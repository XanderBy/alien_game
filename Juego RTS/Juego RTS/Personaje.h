#pragma once
#include "Entidad.h"

class Personaje : public Entidad
{
private:
	Sprite sprte;

public:
	float x;
	float y;
	float vx;
	float vy;
	float tiempo_entre_disparo;

	Personaje();

	Personaje(Sprite sprte_param, float x_param, float y_param, float vx_param, float vy_param, float tiempo_entre_disparo_param);
	
	/*
	void dibujar()
	{
		al_draw_bitmap_region(sprte.hoja.hja, sprte.x, sprte.y, sprte.ancho, sprte.alto, x, y, 0);
	}
	*/
};