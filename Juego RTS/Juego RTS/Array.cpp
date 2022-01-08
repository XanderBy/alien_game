#include "Array.h"


template<typename T>
Array<T>::Array(int longitud)
{
	this->longitud = longitud;
}

template<typename T>
inline void Array<T>::set_valor(int posicion, T valor)
{
	this->dato[posicion] = valor;
}

template<typename T>
T Array<T>::get_valor(int posicion)
{
	return this->dato[posicion];
}

template<typename T>
int Array<T>::get_longitud()
{
	return this->longitud;
}

template<typename T>
T* Array<T>::get_array()
{
	return this->dato;
}
