#include "Mapa.h"

Mapa::Mapa()
{
	this-> max_enemigos=0;
	this->max_aliados=0;
	this->ancho_mapa=0;
	this->alto_mapa=0;
}

Mapa::Mapa(Matriz<Recuadro> cuadricula, Array<Nave> enemigos, Array<Nave> aliados)
{
	this->cuadricula = cuadricula;
	this->enemigos = enemigos;
	this->aliados = aliados;

	inicializar_mapa();
}

void Mapa::dibujar_mapa()
{
	for (size_t x = 0; x < cuadricula.get_alto(); x++)
	{
		for (size_t y = 0; y < cuadricula.get_ancho(); y++)
		{
			cuadricula.get_valor(x, y).dibujar();
		}
	}
	
}

void Mapa::mover_entidad()
{

}

void Mapa::inicializar_mapa()
{
	

	for (size_t x = 0; x < this->alto_mapa; x++)
	{
		for (size_t y = 0; y < this->ancho_mapa; y++)
		{
			Recuadro recuadro = Recuadro(x,y,50,50, Tipo_recuadro::libre);
			this->cuadricula.set_valor(x,y, recuadro);
		}
	}

}

int Mapa::get_ancho_mapa()
{
	return this->ancho_mapa;
}

int Mapa::get_alto_mapa()
{
	return this->alto_mapa;
}
