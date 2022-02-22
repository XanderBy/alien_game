#include "Nave.h"


#ifndef Jugador_H
#define Jugador_H

class Jugador
{
private:

	Nave* listado_naves;

public:

	Jugador(int max_aliados);
	~Jugador();

};

#endif // !Jugador_H
