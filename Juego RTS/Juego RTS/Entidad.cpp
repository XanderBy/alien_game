#include "Entidad.h"

Entidad::Entidad()
{
	sprte = Sprite();
	vida = NULL;
	x = NULL;
	y = NULL;
	vx = NULL;
	vy = NULL;
	tp = tipo_entidad::Ninguno;
}

Entidad::Entidad(Sprite sprte_param, int vida_param, float x_param, float y_param, float vx_param, float vy_param, tipo_entidad tipo_entidad_param)
{
	sprte = sprte_param;
	vida = vida_param;
	x = x_param;
	y = y_param;
	vx = vx_param;
	vy = vy_param;
	tp = tipo_entidad_param;

}

void Entidad::dibujar()
{
	al_draw_bitmap_region(sprte.hoja.hja, sprte.x, sprte.y, sprte.ancho, sprte.alto, x, y, 0);
}
