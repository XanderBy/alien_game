#include "..\Modelo\Partida.h"

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
