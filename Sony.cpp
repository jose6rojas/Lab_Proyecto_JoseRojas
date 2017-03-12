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
		modelo = "PlayStation_1";
		// year = "9 de septiembre de 1995";
		year = "1995";
	}
	else if(op == 2)
	{
		modelo = "PlayStation_2";
		// year = "26 de octubre de 2000";
		year = "2000";
	}
	else if(op == 3)
	{
		modelo = "PlayStation_3";
		// year = "17 de noviembre de 2006";
		year = "2006";
	}
	else if(op == 4)
	{
		modelo = "PlayStation_4";
		// year = "15 de noviembre de 2013";
		year = "2013";
	}
	else if(op == 5)
	{
		modelo = "PSP";
		// year = "24 de marzo de 2004";
		year = "2004";
	}
	else if(op == 6)
	{
		modelo = "PS_Vita";
		// year = "15 de febrero de 2012";
		year = "2012";
	}
	else
	{
		modelo = "PlayStation_4";
		// year = "15 de noviembre de 2013";
		year = "2013";
	}
}
void Sony::setModelo(string modelo)
{
	this -> modelo = modelo;
}
string Sony::getModelo()
{
	return modelo;
}
int Sony::getModelo(string m)
{
	if(m == "PlayStation_1")
                return 1;
        else if(m == "PlayStation_2")
               	return 2;
        else if(m == "PlayStation_3")
                return 3;
        else if(m == "PlayStation_4")
              	return 4;
        else if(m == "PSP")
                return 5;
        else if(m == "PS_Vita")
               	return 6;
	else
		return 4;
}
