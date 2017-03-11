// SquareEnix.cpp - hija de VideoJuego

#include "SquareEnix.h"

SquareEnix::SquareEnix()
{
}
SquareEnix::SquareEnix(string nombre, string year, Consola* consola, int numJugadores, string genero, bool estado, string numSerie, double precio) : VideoJuego(nombre, year, consola, numJugadores, genero, estado, numSerie, precio)
{
}

/* SquareEnix::~SquareEnix()
{
	delete consola;
} */
