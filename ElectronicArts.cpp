// ElectronicArts.cpp - hija de VideoJuego

#include "ElectronicArts.h"

ElectronicArts::ElectronicArts()
{
}
ElectronicArts::ElectronicArts(string nombre, string year, Consola* consola, int numJugadores, string genero, bool estado, string numSerie, double precio) : VideoJuego(nombre, year, consola, numJugadores, genero, estado, numSerie, precio)
{
}

/* ElectronicArts::~ElectronicArts()
{
	delete consola;
} */
