#include "../Modelo/Mapa.h"
#include "../Modelo/Matriz.h"
#include "../Modelo/Nave.h"
#include "../Modelo/Recuadro.h"
#include "../Modelo/Array.h"
#include "../Globales.cpp"

Mapa::Mapa()
{
	this-> max_enemigos=0;
	this->max_aliados=0;
	this->ancho_mapa=0;
	this->alto_mapa=0;
}

Mapa::Mapa(Recuadro** cuadricula, Nave* enemigos, Nave* aliados)
{
	this->cuadricula = cuadricula;
	this->enemigos = enemigos;
	this->aliados = aliados;
	this->alto_mapa = ancho_mapa_gb;
	this->ancho_mapa = alto_mapa_gb;

	inicializar_mapa();
}

void Mapa::dibujar_mapa()
{
	//int filas = sizeof(cuadricula) / sizeof(cuadricula[0]);
	//int columnas = sizeof(cuadricula[0]) / sizeof(cuadricula[0][0]);
	for (size_t x = 0; x < alto_mapa; x++)
	{
		for (size_t y = 0; y < ancho_mapa; y++)
		{
			cuadricula[x][y].dibujar();
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
			this->cuadricula[x][y]= recuadro;
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
