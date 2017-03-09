// Nintendo.cpp - hija de Consola

#include "Nintendo.h"

Nintendo::Nintendo()
{
}
Nintendo::Nintendo(string year, string modelo, bool estado, string numSerie, double precio) : Consola(year, modelo, estado, numSerie, precio)
{
}

void Nintendo::setModelo(int op)
{
	if(op == 1)
		modelo = "Nintendo Entertainment System";
	else if(op == 2)
		modelo = "Super Nintendo Entertainment System";
	else if(op == 3)
		modelo = "Nintendo 64";
	else if(op == 4)
		modelo = "Nintendo GameCube";
	else if(op == 5)
		modelo = "Nintendo Wii";
	else if(op == 6)
		modelo = "Nintendo Wii U";
	else if(op == 7)
		modelo = "Nintendo Switch";
	else if(op == 8)
		modelo = "Game Boy";
	else if(op == 9)
		modelo = "Game Boy Color";
	else if(op == 10)
		modelo = "Game Boy Advance";
	else if(op == 11)
		modelo = "Nintendo DS";
	else if(op == 12)
		modelo = "Nintendo DSi";
	else if(op == 13)
		modelo = "Nintendo 3DS";
	else if(op == 14)
		modelo = "Nintendo New 3DS";
	else
		modelo = "Nintendo Switch";
}
string Nintendo::getModelo()
{
	return modelo;
}
