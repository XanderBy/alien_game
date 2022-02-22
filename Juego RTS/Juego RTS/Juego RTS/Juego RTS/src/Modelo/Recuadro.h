

#ifndef Recuadro_H
#define Recuadro_H

#include "Sprite.h"

enum Tipo_recuadro {Bloqueado, libre};

class Recuadro
{
private:

	
	int ancho;
	int alto;
	Sprite sprt;
	Tipo_recuadro tipo;
	

public:

	int x;
	int y;
	unsigned ocupado_con;
	
	Recuadro();
	Recuadro(int x, int y, int ancho, int alto, Sprite sprt, Tipo_recuadro tipo, unsigned ocupado_con);
	Recuadro(int x, int y, int ancho, int alto, Sprite sprt, Tipo_recuadro tipo);
	Recuadro(int x, int y, int ancho, int alto, Tipo_recuadro tipo);

	Tipo_recuadro get_tipo_recuadro();
	void dibujar();

};

#endif
