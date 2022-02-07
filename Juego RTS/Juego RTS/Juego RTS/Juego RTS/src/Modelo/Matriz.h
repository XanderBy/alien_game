
#ifndef Matriz_H
#define Matriz_H

template<class T>
class Matriz
{
private:
	T** dato;
	int ancho;
	int alto;

public:

	Matriz();
	Matriz(int ancho, int alto);

	void set_valor(int x, int y, T valor);
	T get_valor(int x, int y);
	int get_ancho();
	int get_alto();
};
#endif
