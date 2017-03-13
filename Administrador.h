// Administrador.h - hija de Usuario

#include "Usuario.h"

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador : public Usuario
{
	public:
		string contrasena;
	public:
		Administrador();
		Administrador(string, string);
		
		void setContrasena(string);
		string getContrasena();
};

#endif
