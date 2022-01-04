#pragma once
#include "Sprite.h"


class Entidad
{
private:

	Sprite sprte;

public:

	int vida;
	float x;
	float y;
	float vx;
	float vy;

	Entidad(Sprite sprte, int vida, float x, float y, float vx, float vy);


	void dibujar();
	bool colision();
	void movimiento();





};

