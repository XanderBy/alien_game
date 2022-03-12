#include "..\..\Modelo\Estados\Manejador_estados.h"

Manejador_estados::Manejador_estados()
{
}

Manejador_estados::Manejador_estados(int estado_actual)
{
	this->estado_actual = estado_actual;
}

Manejador_estados::~Manejador_estados()
{
}

void Manejador_estados::estados()
{
	switch (this->estado_actual)
	{
	case 1://Menu

		break;
	case 2://Opciones

		break;
	case 3://Partida

		break;
	default:
		break;
	}
	
}
