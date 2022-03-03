#include "..\Modelo\Game.h"
#include "../Globales.cpp"
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <iostream>

Game::Game()
{
	
}

Game::~Game()
{
	al_destroy_display(disp);
	//al_destroy_font(font);
	al_destroy_event_queue(queue);
	al_destroy_timer(timer);
}

bool Game::inicializacion()
{

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

	}
	catch (const std::exception&)
	{
		res = false;
	}

	return res;
}

bool Game::bucle_principal()
{
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
			eventos_teclado(&event);


			if (Cerrar_juego) {
				break;
			}

			//Definimos el array key
			eventos(&event);


			if (al_is_event_queue_empty(queue) && pintar)
			{
				al_clear_to_color(al_map_rgb(0, 0, 0));
				pintar = false;

				eleccion_estado();

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

void Game::eleccion_estado()
{

	switch (this->estados.estado_actual)
	{
	case menu:
		this->estados.estados();
		break;
	case opciones:
		this->estados.estados();
		break;
	case partida:
		this->estados.estados();
		break;
	default:
		break;
	}

}

void Game::eventos_teclado(ALLEGRO_EVENT* event)
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

void Game::eventos(ALLEGRO_EVENT* event)
{
	switch (event->type)
	{
	case ALLEGRO_EVENT_TIMER:
		//key[ALLEGRO_KEY_MAX] = {0};
		//printf("ACTUALIZA");

		break;
	case ALLEGRO_EVENT_KEY_DOWN:
		//printf("Pulsó");
		switch (event->keyboard.keycode) {
		case ALLEGRO_KEY_W:
			printf("Pulsó W");
			//this->mover_y(true); // remove upward velocity
			break;
		case ALLEGRO_KEY_S:
			//this->mover_y(false); // remove downward velocity
			break;
		case ALLEGRO_KEY_A:
			//this->mover_x(false); // remove leftward velocity
			break;
		case ALLEGRO_KEY_D:
			//this->mover_x(true); // remove leftward velocity
			break;
		}
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
		}
		break;*/
		break;
	}
}


