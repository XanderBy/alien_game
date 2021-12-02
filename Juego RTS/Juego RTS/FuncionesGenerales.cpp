#include <allegro5/allegro5.h>
#include <exception>



bool Inicializacion() {

	bool res = true;

	try
	{
		//Inicializamos Allegro
		al_init();

		//Inicializamos teclado
		al_install_keyboard();

		//Inicializamos el timer para los FPS
		ALLEGRO_TIMER* timer = al_create_timer(1/60);

		//Inicializamos la cola de eventos
		ALLEGRO_EVENT_QUEUE* queue = al_create_event_queue();

		//Inicializamos la pantalla
		//Indicamos ALLEGRO_SAMPLE_BUFFER a 1 para suavizar los pixeles
		al_set_new_display_option(ALLEGRO_SAMPLE_BUFFERS, 1, ALLEGRO_SUGGEST);
		//Utilizamos ALLEGRO_SAMPLES al estar activado el multisampling lo hará por cada pixel
		al_set_new_display_option(ALLEGRO_SAMPLES, 8, ALLEGRO_SUGGEST);
		//ALLEGRO_SUGGEST es para que lo cree siempre(las opciones que hemos hecho)

		//Creamos la pantalla
		al_create_display(960,720);

		//Creamos una limitación en la pantalla
		al_create_bitmap(320,240);


	}
	catch (const std::exception&)
	{
		res = false;
	}

	return res;
}