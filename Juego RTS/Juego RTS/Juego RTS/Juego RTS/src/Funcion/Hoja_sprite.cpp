#include "../Modelo/Hoja_sprite.h"
#include "allegro5/bitmap.h"


Hoja_sprite::Hoja_sprite()
{
}

Hoja_sprite::Hoja_sprite(char* ruta_param, ALLEGRO_BITMAP* hja_param, float ancho_param, float alto_param)
{
	ruta = ruta_param;
	hja = hja_param;
	ancho = ancho_param;
	alto = alto_param;
}

void Hoja_sprite::cargar_sprite()
{
	hja = al_load_bitmap(ruta);
	al_convert_mask_to_alpha(hja, al_map_rgb(255, 0, 255));
	ancho = al_get_bitmap_width(hja);
	alto = al_get_bitmap_height(hja);
}
