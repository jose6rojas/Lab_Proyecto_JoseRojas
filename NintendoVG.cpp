// NintendoVG.cpp - hija de VideoJuego

#include "NintendoVG.h"

NintendoVG::NintendoVG()
{
}
NintendoVG::NintendoVG(string nombre, string year, Consola* consola, int numJugadores, string genero, bool estado, string numSerie, double precio) : VideoJuego(nombre, year, consola, numJugadores, genero, estado, numSerie, precio)
{
}

/* NintendoVG::~NintendoVG()
{
	delete consola;
} */
