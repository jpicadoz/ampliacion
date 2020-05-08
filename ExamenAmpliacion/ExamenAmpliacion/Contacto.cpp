#include "Contacto.h"
#include <sstream>

Contacto::Contacto()
{
	strcpy_s(nombre, "");
	strcpy_s(telefono, "");
	strcpy_s(correo, "");
}

Contacto::Contacto(char* pnombre, char* ptelefono, char* pcorreo)
{
	strcpy_s(nombre, pnombre);
	strcpy_s(telefono, ptelefono);
	strcpy_s(correo, pcorreo);
}

Contacto::~Contacto()
{
}

char* Contacto::getNombre()
{
	return this->nombre;
}

char* Contacto::getTelefono()
{
	return this->telefono;
}

char* Contacto::getCorreo()
{
	return this->correo;
}

void Contacto::setNombre(char* pNombre)
{
	strcpy_s(nombre, pNombre);
}

void Contacto::setTelefono(char* pTelefono)
{
	strcpy_s(telefono, pTelefono);
}

void Contacto::setCorreo(char* pCorreo)
{
	strcpy_s(correo, pCorreo);
}

string Contacto::toString()
{
	stringstream s;
	s << "Nombre: " << getNombre() << "\n";
	s << "Telefono: " << getTelefono() << "\n";
	s << "Correo: " << getCorreo() << "\n";
	s << "---------------------------------" << "\n";
	return s.str();
}
