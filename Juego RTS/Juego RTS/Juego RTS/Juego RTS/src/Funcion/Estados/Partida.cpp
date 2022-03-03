#include "..\..\Modelo\Estados\Partida.h"
#include "../../Modelo/Jugador.h"
#include "../../Modelo/Mapa.h"
#include "../../Modelo/Enemigo.h"

Partida::Partida(Mapa mapa, Jugador jugador, Enemigo enemigo)
{
	this->mapa = &mapa;
	this->jugador = &jugador;
	this->enemigo = &enemigo;

}

Partida::Partida()
{
}

Partida::~Partida()
{
}

void Partida::terminar_partida()
{
}
