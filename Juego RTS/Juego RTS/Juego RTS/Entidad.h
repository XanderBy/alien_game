
#include "Sprite.h"

#ifndef Entidad_HEADER
#define Entidad_HEADER

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

	Entidad();
	Entidad(Sprite sprte, int vida, float x, float y, float vx, float vy);


	void dibujar();
	bool colision();
	void movimiento();





};

#endif
