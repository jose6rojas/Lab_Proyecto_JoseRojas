// Usuario.cpp

#include "Usuario.h"

Usuario::Usuario()
{
}
Usuario::Usuario(string nombre)
{
	this -> nombre = nombre;
}

void Usuario::setNombre(string nombre)
{
	this -> nombre = nombre;
}
string Usuario::getNombre()
{
	return nombre;
}
