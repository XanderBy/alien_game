#pragma once
#include "Sprite.h"

enum Tipo_recuadro {Bloqueado, libre};

class Recuadro
{
private:

	int x;
	int y;
	int ancho;
	int alto;
	Sprite sprt;
	Tipo_recuadro tipo;
	

public:

	unsigned ocupado_con;

	Recuadro(int x, int y, int ancho, int alto, Sprite sprt, Tipo_recuadro tipo, unsigned ocupado_con);

	Tipo_recuadro get_tipo_recuadro();

};

