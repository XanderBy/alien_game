/*

	Juego hecho por Alejandro

*/


#include <stdio.h>
#include "FuncionesGenerales.cpp"


void main() {

	//Primero instalamos/inicializamos los componentes necesarios
	if (Inicializacion()) {
		printf("Inicializado todo correctamente");
	}
	else {
		printf("Fallo a la hora de inicializar");
	}

}