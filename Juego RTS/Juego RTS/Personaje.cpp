#include "Sprite.cpp"


struct Personaje
{
	float x;
	float y;
	float velocidad;
	Sprite sprte;
	float tiempo_entre_disparo;

	Personaje() {};


	void dibujar()
	{
		al_draw_bitmap_region(sprte.hoja.hja, sprte.x, sprte.y, sprte.ancho, sprte.alto, x, y, 0);
	}

};