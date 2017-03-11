// Vendedor.h - hijo de Usuario

#include "Usuario.h"

#ifndef VENDEDOR_H
#define VENDEDOR_H

class Vendedor : public Usuario
{
	private:
		string horaEntrada;
		string horaSalida;
	public:
		Vendedor();
		Vendedor(string, string, string);
		
		void setHoraEntrada(string horaEntrada);
		string getHoraEntrada();
		void setHoraSalida(string horaSalida);
		string getHoraSalida();
};

#endif
