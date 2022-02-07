#include "../Modelo/Sprite.h"

Sprite::Sprite()
{
}

Sprite::Sprite(Hoja_sprite h, float with, float height, float ix, float iy, float px, float py)
{
	hoja = h;
	alto = height;
	ancho = with;
	x = ix;
	y = iy;
}
