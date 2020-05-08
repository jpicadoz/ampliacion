#include "ListaContacto.h"
#include <iostream>

ListaContacto::ListaContacto()
{
	cab = NULL;
	largo = 0;
}

ListaContacto::~ListaContacto()
{
}

NodoLC* ListaContacto::getCab()
{
	return this->cab;
}

int ListaContacto::getLargo()
{
	return this->largo;
}

void ListaContacto::setCab(NodoLC* pcab)
{
	this->cab = pcab;
}

void ListaContacto::setLargo(int plargo)
{
	this->largo = plargo;
}

bool ListaContacto::esVacia()
{
	if (largo < 1)
		return true;
	else
		return false;
}

int ListaContacto::cantidad()
{
	return largo;
}

bool ListaContacto::existe(char* pTelefono)
{
	bool existe = false;
	NodoLC* aux = cab;
	if (!esVacia()) {
		do {

			if (aux->getContacto()->getTelefono() == pTelefono) {
				existe = true;
			}

			aux = aux->getSgte();

		} while (aux != cab && existe == false);

	}

	return existe;

}


bool ListaContacto::agregarContacto(Contacto* x)
{
	bool agregado = false;
	NodoLC* nuevo = new NodoLC(x);


	if (getCab() == NULL) {

		nuevo->setSgte(nuevo);
		nuevo->setAnte(nuevo);
		cab = nuevo;
		largo++;
		agregado = true;

	}
	else {

		if (!existe(nuevo->getContacto()->getTelefono())) {

			NodoLC* aux = cab;

			do
			{
				aux = aux->getSgte();

			} while (aux != cab);

			aux->setSgte(nuevo);
			nuevo->setAnte(aux);
			nuevo->setSgte(cab);
			cab->setAnte(nuevo);
			largo++;
			agregado = true;
		}

	}

	return agregado;

}

bool ListaContacto::agregarAscendente(Contacto* x)
{
	bool agregado = false;
	NodoLC* nuevo = new NodoLC(x);
	return false;
}

void ListaContacto::mostrar()
{
	NodoLC* aux = cab;
	if (aux != NULL)
	{
		for (int i = 1; i <= getLargo(); i++) {
			std::cout << "Posicion " << i << "\n" << aux->getContacto()->toString() << "\n";
			aux = aux->getSgte();
		}

	}
}

//HOLALALALAALALA
