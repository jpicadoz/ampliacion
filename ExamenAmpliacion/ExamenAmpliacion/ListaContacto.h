#pragma once
#include "NodoLC.h"
class ListaContacto
{
private:
	NodoLC* cab;
	int largo;

public:
	ListaContacto();
	~ListaContacto();

	NodoLC* getCab();
	int getLargo();
	void setCab(NodoLC*);
	void setLargo(int);

	bool esVacia();
	int cantidad();
	bool existe(char*);

	bool agregarContacto(Contacto*);
	bool agregarAscendente(Contacto*);
	void mostrar();

};

