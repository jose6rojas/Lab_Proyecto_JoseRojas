// Nintendo.cpp - hija de Consola

#include "Nintendo.h"

Nintendo::Nintendo()
{
}
Nintendo::Nintendo(string modelo, bool estado, string numSerie, double precio) : Consola(modelo, estado, numSerie, precio)
{
}

void Nintendo::setModelo(int op)
{
	if(op == 1)
	{
		modelo = "Nintendo Entertainment System";
		year = "18 de octubre de 1985";
	}
	else if(op == 2)
	{
		modelo = "Super Nintendo Entertainment System";
		year = "23 de agosto de 1991";
	}
	else if(op == 3)
	{
		modelo = "Nintendo 64";
		year = "26 de septiembre de 1996";
	}
	else if(op == 4)
	{
		modelo = "Nintendo GameCube";
		year = "18 de noviembre de 2001";
	}
	else if(op == 5)
	{
		modelo = "Nintendo Wii";
		year = "19 de noviembre de 2006";
	}
	else if(op == 6)
	{
		modelo = "Nintendo Wii U";
		year = "18 de noviembre de 2012";
	}
	else if(op == 7)
	{
		modelo = "Nintendo Switch";
		year = "3 de marzo de 2017";
	}
	else if(op == 8)
	{
		modelo = "Game Boy";
		year = "31 de julio de 1989";
	}
	else if(op == 9)
	{
		modelo = "Game Boy Color";
		year = "18 de noviembre de 1998";
	}
	else if(op == 10)
	{
		modelo = "Game Boy Advance";
		year = "11 de junio de 2001";
	}
	else if(op == 11)
	{
		modelo = "Nintendo DS";
		year = "21 de noviembre de 2004";
	}
	else if(op == 12)
	{
		modelo = "Nintendo DSi";
		year = "5 de abril de 2009";
	}
	else if(op == 13)
	{
		modelo = "Nintendo 3DS";
		year = "27 de marzo de 2011";
	}
	else if(op == 14)
	{
		modelo = "New Nintendo 3DS";
		year = "13 de febrero de 2015";
	}
	else
	{
		modelo = "Nintendo Switch";
		year = "3 de marzo de 2017";
	}
}
string Nintendo::getModelo()
{
	return modelo;
}
