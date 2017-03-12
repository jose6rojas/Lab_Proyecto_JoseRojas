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
		modelo = "Nintendo_Entertainment_System";
		// year = "18 de octubre de 1985";
		year = "1985";
	}
	else if(op == 2)
	{
		modelo = "Super_Nintendo_Entertainment_System";
		// year = "23 de agosto de 1991";
		year = "1991";
	}
	else if(op == 3)
	{
		modelo = "Nintendo_64";
		// year = "26 de septiembre de 1996";
		year = "1996";
	}
	else if(op == 4)
	{
		modelo = "Nintendo_GameCube";
		// year = "18 de noviembre de 2001";
		year = "2001";
	}
	else if(op == 5)
	{
		modelo = "Nintendo_Wii";
		// year = "19 de noviembre de 2006";
		year = "2006";
	}
	else if(op == 6)
	{
		modelo = "Nintendo_Wii_U";
		// year = "18 de noviembre de 2012";
		year = "2012";
	}
	else if(op == 7)
	{
		modelo = "Nintendo_Switch";
		// year = "3 de marzo de 2017";
		year = "2017";
	}
	else if(op == 8)
	{
		modelo = "Game_Boy";
		// year = "31 de julio de 1989";
		year = "1989";
	}
	else if(op == 9)
	{
		modelo = "Game_Boy_Color";
		// year = "18 de noviembre de 1998";
		year = "1998";
	}
	else if(op == 10)
	{
		modelo = "Game_Boy_Advance";
		// year = "11 de junio de 2001";
		year = "2001";
	}
	else if(op == 11)
	{
		modelo = "Nintendo_DS";
		// year = "21 de noviembre de 2004";
		year = "2004";
	}
	else if(op == 12)
	{
		modelo = "Nintendo_DSi";
		// year = "5 de abril de 2009";
		year = "2009";
	}
	else if(op == 13)
	{
		modelo = "Nintendo_3DS";
		// year = "27 de marzo de 2011";
		year = "2011";
	}
	else if(op == 14)
	{
		modelo = "New_Nintendo_3DS";
		// year = "13 de febrero de 2015";
		year = "2015";
	}
	else
	{
		modelo = "Nintendo_Switch";
		// year = "3 de marzo de 2017";
		year = "2017";
	}
}
void Nintendo::setModelo(string modelo)
{
	this -> modelo = modelo;
}
string Nintendo::getModelo()
{
	return modelo;
}
int Nintendo::getModelo(string m)
{
	if(m == "Nintendo_Entertainment_System")
		return 1;
	else if(m == "Super_Nintendo_Entertainment_System")
		return 2;
	else if(m == "Nintendo_64")
		return 3;
	else if(m == "Nintendo_GameCube")
		return 4;
	else if(m == "Nintendo_Wii")
		return 5;
	else if(m == "Nintendo_Wii_U")
		return 6;
	else if(m == "Nintendo_Switch")
		return 7;
	else if(m == "Game_Boy")
		return 8;
	else if(m == "Game_Boy_Color")
		return 9;
	else if(m == "Game_Boy_Advance")
		return 10;
	else if(m == "Nintendo_DS")
		return 11;
	else if(m == "Nintendo_DSi")
		return 12;
	else if(m == "Nintendo_3DS")
		return 13;
	else if(m == "New_Nintendo_3DS")
		return 14;
	else
		return 7;
}
