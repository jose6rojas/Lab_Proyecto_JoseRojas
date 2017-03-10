// MicrosoftVG.cpp

#include "MicrosoftVG.h"

MicrosoftVG::MicrosoftVG()
{
}
MicrosoftVG::MicrosoftVG(string nombre, string year, Consola* consola, int numJugadores, string genero, bool estado, string numSerie, double precio) : VideoJuego(nombre, year, consola, numJugadores, genero, estado, numSerie, precio)
{
}

/* MicrosoftVG::~MicrosoftVG
{
	delete consola;
} */
