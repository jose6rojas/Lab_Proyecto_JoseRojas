// Consola.cpp

#include "Consola.h"

// Constructores
Consola::Consola()
{
}
Consola::Consola(string modelo, bool estado, string numSerie, double precio)
{
	// this -> year = year;
	this -> modelo = modelo;
	this -> estado = estado;
	this -> numSerie = numSerie;
	this -> precio = precio;
}

// Setters y Getters
// year
/* void Consola::setYear(string year)
{
	this -> year = year;
} */
string Consola::getYear()
{
	return year;
}
// estado
void Consola::setEstado(bool estado)
{
	this -> estado = estado;	
}
string Consola::getEstado()
{
	if(estado)
		return "Nuevo";
	else
		return "Usado";
}
// numSerie
void Consola::setNumSerie(string numSerie)
{
	this -> numSerie = numSerie;
}
string Consola::getNumSerie()
{
	return numSerie;
}
// precio
void Consola::setPrecio(double precio)
{
	this -> precio = precio;
}
double Consola::getPrecio()
{
	return precio;
}
