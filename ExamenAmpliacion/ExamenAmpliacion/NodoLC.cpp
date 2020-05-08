#include "NodoLC.h"

NodoLC::NodoLC()
{
	this->contacto = NULL;
	this->sgte = NULL;
	this->ante = NULL;
}

NodoLC::NodoLC(Contacto* pcontacto)
{
	this->contacto = pcontacto;
	this->sgte = NULL;
	this->ante = NULL;
}

NodoLC::~NodoLC()
{
}

Contacto* NodoLC::getContacto()
{
	return this->contacto;
}

NodoLC* NodoLC::getSgte()
{
	return this->sgte;
}

NodoLC* NodoLC::getAnte()
{
	return this->ante;
}

void NodoLC::setContacto(Contacto* pcontacto)
{
	this->contacto = pcontacto;
}

void NodoLC::setSgte(NodoLC* psgte)
{
	this->sgte = psgte;
}

void NodoLC::setAnte(NodoLC* pante)
{
	this->ante = pante;
}
