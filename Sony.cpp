// Sony.cpp - hija de Consola

#include "Sony.h"

Sony::Sony()
{
}
Sony::Sony(string year, string modelo, bool estado, string numSerie, double precio) : Consola(year, modelo, estado, numSerie, precio)
{
}

void Sony::setModelo(int op)
{
	if(op == 1)
		modelo = "PlayStation 1";
	else if(op == 2)
		modelo = "PlayStation 2";
	else if(op == 3)
		modelo = "PlayStation 3";
	else if(op == 4)
		modelo = "PlayStation 4";
	else if(op == 5)
		modelo = "PSP";
	else if(op == 6)
		modelo = "PS Vita";
	else
		modelo = "PlayStation 4";
}
string Sony::getModelo()
{
	return modelo;
}
