#pragma once


template<typename T>
class Matriz
{
private:
	T dato**;
	int ancho,alto;

public:

	Matriz();
	Matriz(int ancho, int alto);

	void set_valor(int x, int y, T valor);
	T get_valor(int x, int y);
};

