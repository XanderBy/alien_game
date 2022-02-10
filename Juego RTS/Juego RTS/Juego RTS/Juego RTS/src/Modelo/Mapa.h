

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

	Recuadro** cuadricula;
	Nave* enemigos;
	Nave* aliados;

	Mapa();
	Mapa(Recuadro** cuadricula, Nave* enemigos, Nave* aliados);


	void dibujar_mapa();
	void mover_entidad();
	void inicializar_mapa();
	int get_ancho_mapa();
	int get_alto_mapa();

};

#endif