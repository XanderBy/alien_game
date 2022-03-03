#include "../Mapa.h"
#include "../Jugador.h"
#include "../Enemigo.h"

#ifndef Partida_H
#define Partida_H

class Partida
{

private:

	

public:
	Mapa *mapa;
	Jugador *jugador;
	Enemigo *enemigo;
	bool jugador_ganador;

	Partida(Mapa mapa, Jugador jugador, Enemigo enemigo);
	Partida();
	~Partida();

	void terminar_partida();

};
#endif // !Partida_H
