#pragma once
#include "Sprite.h"

enum class  tipo_entidad { Ninguno,Personaje, Asteroide, Nave_enemiga };

class Entidad
{
private:
	Sprite sprte;
	int vida;
	tipo_entidad tp;

public:

	float x;
	float y;
	float vx;
	float vy;
	
	Entidad();

	Entidad(Sprite sprte_param, int vida_param, float x_param, float y_param, float vx_param, float vy_param, tipo_entidad tp_param);

	void dibujar();
};

