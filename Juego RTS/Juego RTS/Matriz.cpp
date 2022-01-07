#include "Matriz.h"


template<typename T>
inline Matriz<T>::Matriz(int ancho, int alto)
{
	dato[ancho][alto] = {};
	
}

template<typename T>
void Matriz<T>::set_valor(int x, int y, T valor)
{
	dato[x][y] = valor;
}

template<typename T>
T Matriz<T>::get_valor(int x, int y)
{
	return dato[x][y];
}
