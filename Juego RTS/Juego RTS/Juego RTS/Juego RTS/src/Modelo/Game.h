#include "Estados/Manejador_estados.h"


#ifndef Game_H
#define Game_H

class Game
{
private:

public:

	//Partida *partida;
	int Ancho_pantalla = 960;
	int Alto_pantalla = 720;
	//float velocidad = 0.1;

	//int ancho_mapa_gb = 20;
	//int alto_mapa_gb = 10;

	//int max_naves_jugador_gb = 10;
	//int max_naves_enemigos_gb = 10;

	//int velocidad_movimiento = 1;
	Manejador_estados estados;
	double FPS = 1 / 60;

	ALLEGRO_TIMER* timer = NULL;
	ALLEGRO_EVENT_QUEUE* queue = NULL;
	ALLEGRO_DISPLAY* disp = NULL;

	bool Cerrar_juego = false;
	bool pintar = true;


	//Con esto controlo que "pulse" una vez por segundo
	time_t inicioPulsaciones;
	time_t finPulsaciones;

	Game();
	~Game();

	bool inicializacion();
	bool bucle_principal();
	void eleccion_estado();
	void eventos(ALLEGRO_EVENT* event);
	void eventos_teclado(ALLEGRO_EVENT* event);
	//void mover_x(bool positivo);
	//void mover_y(bool positivo);

};

#endif // !Game_H
