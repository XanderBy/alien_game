#include <allegro5/allegro5.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/events.h>
#include <allegro5/allegro_image.h>
#include <exception>
#include "../Globales.cpp"
#include <stdio.h>
#include "../Modelo/Array.h"

#define KEY_SEEN     1
#define KEY_RELEASED 2

static bool Inicializacion() {

	bool res = true;

	try
	{
		//Inicializamos Allegro
		al_init();

		//Instalamos el modulo de teclado
		al_install_keyboard();

		//Instalamos el modulo del Timer el cual vaya a 60 FPS
		timer = al_create_timer(FPS);

		//Instalamos el modulo de la cola de eventos
		queue = al_create_event_queue();

		//Instalamos el modulo de la pantalla
		disp = al_create_display(Ancho_pantalla, Alto_pantalla);

		//Instalamos el modulo de fuente
		al_init_font_addon();

		//Iniciamos para dibujos basicos
		al_init_primitives_addon();

		//Instalamos el modulo de audio
		al_install_audio();

		//registramos los modulos anteriormente instalados

		al_register_event_source(queue, al_get_keyboard_event_source());
		al_register_event_source(queue, al_get_display_event_source(disp));
		al_register_event_source(queue, al_get_timer_event_source(timer));

		//
		al_init_image_addon();

		//Inicializamos el mapa
		Nave* enemigos = new Nave[max_naves_enemigos_gb];
		Nave* aliados = new Nave[max_naves_jugador_gb];
		Recuadro** cuadricula = new Recuadro*[ancho_mapa_gb];
		for (int i = 0; i < ancho_mapa_gb; i++) cuadricula[i] = new Recuadro[alto_mapa_gb];
		mapa = Mapa(cuadricula,enemigos, aliados);

	}
	catch (const std::exception&)
	{
		res = false;
	}

	return res;
}

static void EventosTeclado(ALLEGRO_EVENT* event)
{

	switch (event->type)
	{
	case ALLEGRO_EVENT_TIMER:
		pintar = true;
		break;
	case ALLEGRO_EVENT_DISPLAY_CLOSE:
		printf("Cerrar");
		Cerrar_juego = true;
		break;
	default:
		break;
	}

}
static void Eventos(ALLEGRO_EVENT* event)
{

	switch (event->type)
	{
	case ALLEGRO_EVENT_TIMER:
		//key[ALLEGRO_KEY_MAX] = {0};
		//printf("ACTUALIZA");

		break;
	case ALLEGRO_EVENT_KEY_DOWN:
		printf("Pulsó");
		/*switch (event->keyboard.keycode) {
		case ALLEGRO_KEY_W:
			jugador.vy -= velocidad; // remove upward velocity
			break;
		case ALLEGRO_KEY_S:
			jugador.vy += velocidad; // remove downward velocity
			break;
		case ALLEGRO_KEY_A:
			jugador.vx -= velocidad; // remove leftward velocity
			break;
		case ALLEGRO_KEY_D:
			jugador.vx += velocidad; // remove leftward velocity
			break;
		}*/
		break;
	case ALLEGRO_EVENT_KEY_UP:
		//printf("Soltó");
		/*switch (event->keyboard.keycode) {
		case ALLEGRO_KEY_W:
			jugador.vy += velocidad; // remove upward velocity
			break;
		case ALLEGRO_KEY_S:
			jugador.vy -= velocidad; // remove downward velocity
			break;
		case ALLEGRO_KEY_A:
			jugador.vx += velocidad; // remove leftward velocity
			break;
		case ALLEGRO_KEY_D:
			jugador.vx -= velocidad; // remove leftward velocity
			break;
		}*/
		break;
	}
}
static bool BuclePrincipal() {
	bool res = true;

	try
	{

		//Se inicializa el timer
		al_start_timer(timer);
		while (true)
		{
			ALLEGRO_EVENT event;
			//Hacemos que espere algun evento
			al_wait_for_event(queue, &event);

			//Con el evento timer asignamos que hace si presiona 
			// X tecla en el array key
			EventosTeclado(&event);


			if (Cerrar_juego) {
				break;
			}

			//Definimos el array key
			Eventos(&event);


			if (al_is_event_queue_empty(queue) && pintar)
			{

				al_clear_to_color(al_map_rgb(0, 0, 0));
				pintar = false;
				
				mapa.dibujar_mapa();

				al_flip_display();
			}


		}
	}
	catch (const std::exception&)
	{
		res = false;
	}



	return res;
}
static void Destructor()
{
	al_destroy_display(disp);
	//al_destroy_font(font);
	al_destroy_event_queue(queue);
	al_destroy_timer(timer);
}
