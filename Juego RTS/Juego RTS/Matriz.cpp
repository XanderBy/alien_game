#include "Matriz.h"



template<class T>
Matriz<T>::Matriz()
{
}

template<class T>
Matriz<T>::Matriz(int ancho, int alto)
{
	this->dato[ancho][alto] = { {} };
	
}

template<class T>
void Matriz<T>::set_valor(int x, int y, T valor)
{
	this->dato[x][y] = valor;
}

template<class T>
T Matriz<T>::get_valor(int x, int y)
{
	return this->dato[x][y];
}

template<class T>
int Matriz<T>::get_ancho()
{
	return this->ancho;
}

template<class T>
int Matriz<T>::get_alto()
{
	return this->alto;
}
