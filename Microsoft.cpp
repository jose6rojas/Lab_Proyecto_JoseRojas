// Microsoft.cpp - hija de Consola

#include "Microsoft.h"

// Constructores
Microsoft::Microsoft()
{
}
Microsoft::Microsoft(string modelo, bool estado, string numSerie, double precio) : Consola(modelo, estado, numSerie, precio)
{
}

// Setter y Getter para modelo
void Microsoft::setModelo(int op)
{
	if(op == 1)
	{
		modelo = "Xbox";
		year = "15 de noviembre de 2001";
	}
	else if(op == 2)
	{
		modelo = "Xbox 360";
		year = "22 de noviembre de 2005";
	}
	else if(op == 3)
	{
		modelo = "Xbox One";
		year = "22 de noviembre de 2013";
	}
	else
	{
		modelo = "Xbox";
		year = "15 de noviembre de 2001";
	}
}
string Microsoft::getModelo()
{
	return modelo;
}
