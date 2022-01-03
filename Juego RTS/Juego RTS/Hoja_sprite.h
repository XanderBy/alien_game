#pragma once
#include <allegro5/bitmap.h>
#include <allegro5/allegro5.h>

class Hoja_sprite
{
private:

	const char* ruta;
	float ancho;
	float alto;

public:
	ALLEGRO_BITMAP* hja;

	Hoja_sprite();

	Hoja_sprite(char* ruta_param, ALLEGRO_BITMAP* hja_param, float ancho_param, float alto_param);

	void cargar_sprite();

};
