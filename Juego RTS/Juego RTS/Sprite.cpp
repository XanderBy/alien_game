#include <string>
#include <allegro5/allegro5.h>
#include <allegro5/bitmap.h>
#pragma once

struct Hoja_sprite
{
	const char* ruta;
	ALLEGRO_BITMAP* hja;
	float ancho;
	float alto;


	void cargar_sprite()
	{
		hja = al_load_bitmap(ruta);
		al_convert_mask_to_alpha(hja, al_map_rgb(255, 0, 255));
		ancho = al_get_bitmap_width(hja);
		alto = al_get_bitmap_height(hja);


	}
};


struct Sprite
{
	Hoja_sprite hoja;
	float ancho;
	float alto;
	float x;
	float y;

	Sprite() {};

	Sprite(Hoja_sprite h,float with, float height,float ix,float iy, float px, float py) {
		hoja = h;
		alto = height;
		ancho = with;
		x = ix;
		y= iy;
	}


};
