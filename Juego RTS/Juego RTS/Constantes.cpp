#include <allegro5/allegro_font.h>
#include <allegro5/allegro_audio.h>


	// Sprites



const int ALIEN_W[] = { 14, 13, 45 };
const int ALIEN_H[] = { 9, 10, 27 };





	//Teclado

	unsigned char key[ALLEGRO_KEY_MAX];


	//Pantalla


	ALLEGRO_DISPLAY* disp;
	ALLEGRO_BITMAP* buffer;

	long frames;


	//Texto
	ALLEGRO_FONT* font;
	long score_display;
	long score;



	//Audio

	ALLEGRO_SAMPLE* sample_shot;
	ALLEGRO_SAMPLE* sample_explode[2];

