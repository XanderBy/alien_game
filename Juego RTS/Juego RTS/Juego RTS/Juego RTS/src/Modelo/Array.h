

#ifndef Array_H
#define Array_H

template <class T>
class Array
{
private:
	T* dato;
	int longitud;

public:
	Array();
	Array(int longitud);

	void set_valor(int posicion, T valor);
	T get_valor(int posicion);
	int get_longitud();
	T* get_array();

};

#endif