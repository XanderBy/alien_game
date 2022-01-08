

void agrandar_array_nuevos_valores(unsigned lista[], unsigned nuevos_objetos[]) {
	int tamano = (sizeof(lista) + 1);
	int i = 0;
	int y = 0;
	unsigned nueva_lista[(sizeof(lista) + 1)]{};

	for (; i < tamano; i++)
	{
		nueva_lista[i] = lista[i];
	}
	tamano = sizeof(nueva_lista);
	for (; i < tamano; i++)
	{
		nueva_lista[i] = nuevos_objetos[y];
		y++;
	}

	delete lista;

	lista = nueva_lista;

}