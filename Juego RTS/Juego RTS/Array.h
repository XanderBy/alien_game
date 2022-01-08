#pragma once

template <typename T>
class Array
{
private:
	T dato*;
	int longitud;

public:
	Array();
	Array(int longitud);

	void set_valor(int posicion, T valor);
	T get_valor(int posicion);
	int get_longitud();
	T* get_array();

};


