

#ifndef Mapa_H
#define Mapa_H

#include "Recuadro.h"
#include "Nave.h"


class Mapa
{
	//para mover por el mapa utilizar al_identity_transform y sus variaciones.
	//Sera una matriz en el cual en cada recuadro podra moverse el personaje y enemigos, solo cuadrado consecutivos
private:

	int max_enemigos;
	int max_aliados;
	int ancho_mapa;
	int alto_mapa;

public:
	//int posicion_mapa_x;
	//int posicion_mapa_y;
	int posicion_x;
	int posicion_y;
	Recuadro** cuadricula;

	Mapa();
	Mapa(Recuadro** cuadricula, int max_aliados, int max_enemigos, int ancho_mapa, int alto_mapa);


	void dibujar_mapa();
	void inicializar_mapa();
	void actualizar_posicion();
	int get_ancho_mapa();
	int get_alto_mapa();
	int get_max_enemigos();
	int get_max_aliados();

};

#endif
