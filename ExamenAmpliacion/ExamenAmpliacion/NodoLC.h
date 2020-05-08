#pragma once
#include "Contacto.h"
class NodoLC
{
private:
	Contacto* contacto;
	NodoLC* sgte;
	NodoLC* ante;
public:
	NodoLC();
	NodoLC(Contacto*);
	~NodoLC();

	Contacto* getContacto();
	NodoLC* getSgte();
	NodoLC* getAnte();

	void setContacto(Contacto*);
	void setSgte(NodoLC*);
	void setAnte(NodoLC*);

};

