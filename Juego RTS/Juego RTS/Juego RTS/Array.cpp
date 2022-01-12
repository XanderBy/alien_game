#include "Array.h"


template<class T>
Array<T>::Array()
{
}

template<class T>
Array<T>::Array(int longitud)
{
	this->longitud = longitud;
}

template<class T>
inline void Array<T>::set_valor(int posicion, T valor)
{
	this->dato[posicion] = valor;
}

template<class T>
T Array<T>::get_valor(int posicion)
{
	return this->dato[posicion];
}

template<class T>
int Array<T>::get_longitud()
{
	return this->longitud;
}

template<class T>
T* Array<T>::get_array()
{
	return this->dato;
}
