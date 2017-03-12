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
		// year = "15 de noviembre de 2001";
		year = "2001";
	}
	else if(op == 2)
	{
		modelo = "Xbox_360";
		// year = "22 de noviembre de 2005";
		year = "2005";
	}
	else if(op == 3)
	{
		modelo = "Xbox_One";
		// year = "22 de noviembre de 2013";
		year = "2013";
	}
	else
	{
		modelo = "Xbox";
		// year = "15 de noviembre de 2001";
		year = "2001";
	}
}
void Microsoft::setModelo(string modelo)
{
	this -> modelo = modelo;
}
string Microsoft::getModelo()
{
	return modelo;
}
int Microsoft::getModelo(string m)
{
	if(m == "Xbox")
                return 1;
        else if(m == "Xbox_360")
                return 2;
        else if(m == "Xbox_One")
                return 3;
        else
                return 1;
}
