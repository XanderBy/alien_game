
#include <string>
#include "Hoja_sprite.h"

#ifndef Sprite_HEADER
#define Sprite_HEADER

class Sprite
{
private:
	

public:
	Hoja_sprite hoja;
	float ancho;
	float alto;
	float x;
	float y;

	Sprite();

	Sprite(Hoja_sprite h_param, float with_param, float height_param, float ix_param, float iy_param, float px_param, float py_param);

};

#endif