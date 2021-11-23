#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>

void main() 
{
	
	//iniciamos Allegro
	al_init();

	//iniciamos las posibles entradas por teclado
	al_install_keyboard();

	//Creamos un temporizador el cual indica 
	//En un segundo cuantos fotogramas habrá
	ALLEGRO_TIMER* timer = al_create_timer(1 / 30);
	//Creamos la cola para los eventos
	ALLEGRO_EVENT_QUEUE* queue = al_create_event_queue();

	//Creamos la ventana
	ALLEGRO_DISPLAY* disp = al_create_display(640,480);

	//Fuentes del sistema
	ALLEGRO_FONT* font = al_create_builtin_font();

	//Registramos los posibles eventos que habrá en la cola
	al_register_event_source(queue,al_get_keyboard_event_source());
	al_register_event_source(queue,al_get_display_event_source(disp));
	al_register_event_source(queue,al_get_timer_event_source(timer));

	bool done = false;
	bool redraw = true;
	ALLEGRO_EVENT event;

	//Iniciamos el contador de FPS
	al_start_timer(timer);
	while (1)
	{
		//Esperamos a que haya algun evento
		al_wait_for_event(queue, &event);

		switch (event.type)
		{
			//Cada vez que cumpla los 30 FPS (en un segundo)
			case ALLEGRO_EVENT_TIMER:
				redraw = true;
				break;
			//Si le ha dado a alguna tecla o cierra la ventana
			case ALLEGRO_EVENT_KEY_DOWN:
				done = true;
				break;
			case ALLEGRO_EVENT_DISPLAY_CLOSE :
				done = true;
				break;
			default:
				break;
		}
		
		

		if (done)
			break;

		//Si ha redibujado y ademas no hay mas eventos pendientes
		if (redraw && al_is_event_queue_empty(queue)) {

			al_clear_to_color(al_map_rgb(0, 0, 0));
			al_draw_text(font, al_map_rgb(255, 255, 255), 0, 0, 0, "Hello World");
			al_flip_display();

			redraw = false;
		}



	}

	//Limpiamos los recursos
	al_destroy_font(font);
	al_destroy_display(disp);
	al_destroy_timer(timer);
	al_destroy_event_queue(queue);


}	

		
