#include <allegro5/allegro5.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/events.h>
#include <allegro5/allegro_image.h>
#include <exception>
#include "Globales.cpp"
#include <stdio.h>

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

		//Instalamos el modulo de audio
		al_install_audio();

		//registramos los modulos anteriormente instalados

		al_register_event_source(queue, al_get_keyboard_event_source());
		al_register_event_source(queue, al_get_display_event_source(disp));
		al_register_event_source(queue, al_get_timer_event_source(timer));

		//
		al_init_image_addon();
		//Inicializamos la hoja de sprites
		hoja.ruta = "spritesheet.png";
		hoja.ancho = 64;
		hoja.alto = 64;
		hoja.cargar_sprite();

		//Inicializamos al jugador
		jugador.x = 100;
		jugador.y = 100;
		jugador.sprte = Sprite(hoja,11,6,0,0,11,6);


	}
	catch (const std::exception&)
	{
		res = false;
	}

	return res;
}

static void EventosTeclado(ALLEGRO_EVENT* event)
{

	switch (event -> type)
	{
	case ALLEGRO_EVENT_TIMER:
		if (key[ALLEGRO_KEY_A]) {
			//printf("CLICK E");
			jugador.x-=10;
		}
		if (key[ALLEGRO_KEY_D]) {
			//printf("CLICK E");
			jugador.x += 10;
		}
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
	
	switch (event -> type)
	{
	case ALLEGRO_EVENT_TIMER:

		break;
	case ALLEGRO_EVENT_KEY_DOWN:
		printf("Pulsó");
		key[event -> keyboard.keycode] = key[event->keyboard.keycode] ? false : true;
		break;
	case ALLEGRO_EVENT_KEY_UP:
		printf("Soltó");
		key[event -> keyboard.keycode] = false;
		break;
	}
}
static bool BuclePrincipal() {
	bool res = true;
	
	try
	{
		//asignamos el espacio correspondiente para el array de teclas
		//esto quiere decir que al array key le asignamos un valor de 0 en memoria pero con un posible tamaño del maximo
		memset(key,0,sizeof(key));

		//Se inicializa el timer
		al_start_timer(timer);
		for (int i = 0; i < ALLEGRO_KEY_MAX; i++)
			key[i] &= 0;
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
			
			
			if(al_is_event_queue_empty(queue) && pintar )
			{
				
				
				al_clear_to_color(al_map_rgb(0, 0, 0));
				pintar = false;

				jugador.dibujar();

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
