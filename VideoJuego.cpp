// VideoJuego.cpp

#include "VideoJuego.h"

VideoJuego::VideoJuego()
{
}
VideoJuego::VideoJuego(string nombre, string year, Consola* consola, int numJugadores, string genero, bool estado, string numSerie, double precio)
{
	this -> nombre = nombre;
	this -> year = year;
	this -> consola = consola;
	this -> numJugadores = numJugadores;
	this -> genero = genero;
	this -> estado = estado;
	this -> numSerie = numSerie;
	this -> precio = precio;
}

// nombre
void VideoJuego::setNombre(string nombre)
{
	this -> nombre = nombre;
}
string VideoJuego::getNombre()
{
	return nombre;
}
// year
void VideoJuego::setYear(string year)
{
	this -> year = year;
}
string VideoJuego::getYear()
{
	return year;
}
// consola
void VideoJuego::setConsola(Consola* consola)
{
	this -> consola = consola;
}
Consola* VideoJuego::getConsola()
{
	return consola;
}
// numJugadores
void VideoJuego::setNumJugadores(int numJugadores)
{
	this -> numJugadores = numJugadores;
}
int VideoJuego::getNumJugadores()
{
	return numJugadores;
}
// genero
void VideoJuego::setGenero(int op)
{
	if(op == 1)
		genero = "Early Childhood (EC)";
	else if(op == 2)
		genero = "Everyone (E)";
	else if(op == 3)
		genero = "Everyone 10+ (E10+)";
	else if(op == 4)
		genero = "Teen (T)";
	else if(op == 5)
		genero = "Mature (M)";
	else if(op == 6)
		genero = "Adults Only (AO)";
	else
		genero = "Everyone (E)";
}
string VideoJuego::getGenero()
{
	return genero;
}
// estado
void VideoJuego::setEstado(bool estado)
{
	this -> estado = estado;	
}
string VideoJuego::getEstado()
{
	if(estado)
		return "Nuevo";
	else
		return "Usado";
}
// numSerie
void VideoJuego::setNumSerie(string numSerie)
{
	this -> numSerie = numSerie;
}
string VideoJuego::getNumSerie()
{
	return numSerie;
}
// precio
void VideoJuego::setPrecio(double precio)
{
	this -> precio = precio;
}
double VideoJuego::getPrecio()
{
	return precio;
}

VideoJuego::~VideoJuego()
{
	delete consola;
}
