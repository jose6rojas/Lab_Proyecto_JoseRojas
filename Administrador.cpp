// Administrador.cpp - hijo de Usuario

#include "Administrador.h"

Administrador::Administrador()
{
}
Administrador::Administrador(string nombre, string contrasena) : Usuario(nombre)
{
	this -> contrasena = contrasena;
}

void Administrador::setContrasena(string contrasena)
{
	this -> contrasena = contrasena;
}
string Administrador::getContrasena()
{
	return contrasena;
}
