// Sony.cpp - hija de Consola

#include "Sony.h"

Sony::Sony()
{
}
Sony::Sony(string modelo, bool estado, string numSerie, double precio) : Consola(modelo, estado, numSerie, precio)
{
}

void Sony::setModelo(int op)
{
	if(op == 1)
	{
		modelo = "PlayStation 1";
		year = "9 de septiembre de 1995";
	}
	else if(op == 2)
	{
		modelo = "PlayStation 2";
		year = "26 de octubre de 2000";
	}
	else if(op == 3)
	{
		modelo = "PlayStation 3";
		year = "17 de noviembre de 2006";
	}
	else if(op == 4)
	{
		modelo = "PlayStation 4";
		year = "15 de noviembre de 2013";
	}
	else if(op == 5)
	{
		modelo = "PSP";
		year = "24 de marzo de 2004";
	}
	else if(op == 6)
	{
		modelo = "PS Vita";
		year = "15 de febrero de 2012";
	}
	else
	{
		modelo = "PlayStation 4";
		year = "15 de noviembre de 2013";
	}
}
string Sony::getModelo()
{
	return modelo;
}
