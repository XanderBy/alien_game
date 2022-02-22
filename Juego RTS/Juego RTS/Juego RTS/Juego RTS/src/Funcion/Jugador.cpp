
#include "../Modelo/Jugador.h"
#include "../Globales.cpp"
#include <iostream>

Jugador::Jugador(int max_aliados)
{
	this->listado_naves = new Nave[max_aliados];
}

Jugador::~Jugador()
{

}
