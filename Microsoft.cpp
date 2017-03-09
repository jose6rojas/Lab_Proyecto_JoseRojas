// Microsoft.cpp - hija de Consola

#include "Microsoft.h"

// Constructores
Microsoft::Microsoft()
{
}
Microsoft::Microsoft(string year, string modelo, bool estado, string numSerie, double precio) : Consola(year, modelo, estado, numSerie, precio)
{
}

// Setter y Getter para modelo
void Microsoft::setModelo(int op)
{
	if(op == 1)
		modelo = "Xbox";
	else if(op == 2)
		modelo = "Xbox 360";
	else if(op == 3)
		modelo = "Xbox One";
	else
		modelo = "Xbox";
}
string Microsoft::getModelo()
{
	return modelo;
}
