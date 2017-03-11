// SEGA.cpp - hija de VideoJuego

#include "SEGA.h"

SEGA::SEGA()
{
}
SEGA::SEGA(string nombre, string year, Consola* consola, int numJugadores, string genero, bool estado, string numSerie, double precio) : VideoJuego(nombre, year, consola, numJugadores, genero, estado, numSerie, precio)
{
}

/* SEGA::~SEGA()
{
	delete consola;
} */
