#pragma once
#include <string>
using namespace std;
class Contacto
{
private:
	char nombre[60];
	char telefono[60];
	char correo[60];

public:
	//const - destructor
	Contacto();
	Contacto(char*, char*, char*);
	~Contacto();

	//Gets y Sets
	char* getNombre();
	char* getTelefono();
	char* getCorreo();

	void setNombre(char*);
	void setTelefono(char*);
	void setCorreo(char*);
	string toString();


};

