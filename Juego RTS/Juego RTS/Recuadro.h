
#include "Sprite.h"

#ifndef Recuadro_HEADER
#define Recuadro_HEADER

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
	
	Recuadro();
	Recuadro(int x, int y, int ancho, int alto, Sprite sprt, Tipo_recuadro tipo, unsigned ocupado_con);
	Recuadro(int x, int y, int ancho, int alto, Sprite sprt, Tipo_recuadro tipo);
	Recuadro(int x, int y, int ancho, int alto, Tipo_recuadro tipo);

	Tipo_recuadro get_tipo_recuadro();
	void dibujar();

};

#endif
