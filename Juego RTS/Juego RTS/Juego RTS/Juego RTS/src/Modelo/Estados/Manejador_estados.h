#include "../../Globales.cpp"
#include "Menu.h"
#include "Opciones.h"
#include "Partida.h"

#ifndef Manejador_estados_H
#define Manejador_estados_H

class Manejador_estados
{
private:


public:

	estados_juego estado_actual;
	Menu estado_menu;
	Opciones estado_opciones;
	Partida estado_partida;

	Manejador_estados();
	~Manejador_estados();

	void estados();


};

#endif // !Manejador_estados_H
