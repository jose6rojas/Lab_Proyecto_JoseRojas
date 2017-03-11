// Usuario.h

#include <string>

using namespace std;

#ifndef USUARIO_H
#define USUARIO_H

class Usuario
{
	protected:
		string nombre;
	public:
		Usuario();
		Usuario(string);
		
		void setNombre(string);
		string getNombre();
};

#endif
