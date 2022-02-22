#include "../Modelo/Mapa.h"
#include "../Modelo/Matriz.h"
#include "../Modelo/Nave.h"
#include "../Modelo/Recuadro.h"
#include "../Modelo/Array.h"
#include "../Globales.cpp"
#include <iostream>

Mapa::Mapa()
{
	this->cuadricula = NULL;
	this->max_enemigos=0;
	this->max_aliados=0;
	this->ancho_mapa=0;
	this->alto_mapa=0;
	this->posicion_x = 0;
	this->posicion_y = 0;
	//this->posicion_mapa_x = 0;
	//this->posicion_mapa_y = 0;
}

Mapa::Mapa(Recuadro** cuadricula, int max_aliados, int max_enemigos,int ancho_mapa,int alto_mapa)
{
	this->cuadricula = cuadricula;
	this->alto_mapa = ancho_mapa;
	this->ancho_mapa = alto_mapa;
	this->max_aliados = max_aliados;
	this->max_enemigos = max_enemigos;
	this->posicion_x = 0;
	this->posicion_y = 0;
	//this->posicion_mapa_x = 0;
	//this->posicion_mapa_y = 0;

	inicializar_mapa();
}

void Mapa::dibujar_mapa()
{
	//int filas = sizeof(cuadricula) / sizeof(cuadricula[0]);
	//int columnas = sizeof(cuadricula[0]) / sizeof(cuadricula[0][0]);
	//std::cout << "X dibujar: " << this->posicion_x;
	for (size_t x = 0; x < alto_mapa; x++)
	{
		for (size_t y = 0; y < ancho_mapa; y++)
		{
			this->cuadricula[x][y].x = x + this->posicion_x;
			this->cuadricula[x][y].y = y + this->posicion_y;
			this->cuadricula[x][y].dibujar();
		}
	}
	
}

void Mapa::inicializar_mapa()
{
	
	std::cout << "Inicializacion: " << this->alto_mapa;
	for (size_t x = 0; x < this->alto_mapa; x++)
	{
		for (size_t y = 0; y < this->ancho_mapa; y++)
		{
			Recuadro recuadro = Recuadro(x,y,50,50, Tipo_recuadro::libre);
			this->cuadricula[x][y]= recuadro;
		}
	}

}

void Mapa::actualizar_posicion()
{
	//this->posicion_x += this->posicion_mapa_x;
	//this->posicion_y += this->posicion_mapa_y;
}

int Mapa::get_ancho_mapa()
{
	return this->ancho_mapa;
}

int Mapa::get_alto_mapa()
{
	return this->alto_mapa;
}

int Mapa::get_max_enemigos()
{
	return 0;
}

int Mapa::get_max_aliados()
{
	return 0;
}
