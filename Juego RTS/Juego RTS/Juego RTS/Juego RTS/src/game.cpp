/*

	Juego hecho por Alejandro

*/


#include <stdio.h>
#include "./Funcion/FuncionesIniciales.cpp"

int main() {

	//Primero instalamos/inicializamos los componentes necesarios
	
	if (Inicializacion()) {
		printf("Inicializado todo correctamente");

		if (BuclePrincipal()) {
			printf("El bucle Principal se ejecuto Correctamente");
			Destructor();
		}else {
			printf("El bucle principal ha fallado");
		}
	}
	else {
		printf("Fallo a la hora de inicializar");
	}
	
	return 1;
}
