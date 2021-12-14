#include <string>
#include <allegro5/allegro5.h>
#include <allegro5/bitmap.h>


struct Sprite
{
	char* ruta;
	ALLEGRO_BITMAP* hoja_sprite;
	int ancho;
	int alto;

	void dibujar_sprite_especifico(float xi, float yi, float xf, float yf, float ancho, float alto)
	{
		al_draw_bitmap_region(hoja_sprite,xi,yi,ancho,alto,xf,yf,0);
	}

	void cargar_sprite()
	{
		hoja_sprite = al_load_bitmap(ruta);
		al_convert_mask_to_alpha(hoja_sprite, al_map_rgb(255, 0, 255));
		ancho = al_get_bitmap_width(hoja_sprite);
		alto = al_get_bitmap_height(hoja_sprite);


	}
};



