// Ubisoft.cpp - hija de VideoJuego

#include "Ubisoft.h"

Ubisoft::Ubisoft()
{
}
Ubisoft::Ubisoft(string nombre, string year, Consola* consola, int numJugadores, string genero, bool estado, string numSerie, double precio) : VideoJuego(nombre, year, consola, numJugadores, genero, estado, numSerie, precio)
{
}

/* Ubisoft::~Ubisoft()
{
	delete consola;
} */
