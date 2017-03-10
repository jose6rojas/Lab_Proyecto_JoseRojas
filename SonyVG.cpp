// SonyVG.cpp - hija de VideoJuego

#include "SonyVG.h"

SonyVG::SonyVG()
{
}
SonyVG::SonyVG(string nombre, string year, Consola* consola, int numJugadores, string genero, bool estado, string numSerie, double precio) : VideoJuego(nombre, year, consola, numJugadores, genero, estado, numSerie, precio)
{
}
