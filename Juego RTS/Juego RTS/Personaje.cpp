#include "Personaje.h"

Personaje::Personaje()
{
	sprte = Sprite();
	x = NULL;
	y = NULL;
	vx = NULL;
	vy = NULL;
	tiempo_entre_disparo = NULL;
}

Personaje::Personaje(Sprite sprte_param, float x_param, float y_param, float vx_param, float vy_param, float tiempo_entre_disparo_param)
{
	sprte = sprte_param;
	x = x_param;
	y = y_param;
	vx = vx_param;
	vy = vy_param;
	tiempo_entre_disparo = tiempo_entre_disparo_param;
}

