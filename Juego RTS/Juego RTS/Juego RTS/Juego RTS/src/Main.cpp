/*

	Juego hecho por Alejandro

*/


#include <stdio.h>
#include "Modelo/Game.h"
#include "./Globales.cpp"



int main() {

	Game *juego = new Game();
	if (juego->inicializacion()) {
		printf("Inicializado todo correctamente");

		if (juego->bucle_principal()) {
			printf("El bucle Principal se ejecuto Correctamente");
		}
		else {
			printf("El bucle principal ha fallado");
		}
	}
	else {
		printf("Fallo a la hora de inicializar");
	}
	delete juego;
	//Primero instalamos/inicializamos los componentes necesarios
	
	return 1;
}
