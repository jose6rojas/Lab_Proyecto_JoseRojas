// Konami.cpp - hija de VideoJuego

#include "Konami.h"

Konami::Konami()
{
}
Konami::Konami(string nombre, string year, Consola* consola, int numJugadores, string genero, bool estado, string numSerie, double precio) : VideoJuego(nombre, year, consola, numJugadores, genero, estado, numSerie, precio)
{
}

/* Konami::~Konami()
{
	delete consola;
} */
