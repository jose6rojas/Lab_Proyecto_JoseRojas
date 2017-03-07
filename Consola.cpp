// martes, 7 de marzo de 2017
// Consola.cpp

#include "Consola.h"

// Constructores
Consola::Consola()
{
	year = "";
	modelo = "";
	estado = "";
	numSerie = "";
	precio = 0.0;
}
Consola::Consola(string year, string modelo, string estado, string numSerie, double precio)
{
	this -> year = year;
	this -> modelo = modelo;
	this -> estado = estado;
	this -> numSerie = numSerie;
	this -> precio = precio;
}

// year
void Consola::setYear(string)
{
	this -> year = year;
}
string Consola::getYear()
{
	return year;
}

// modelo
void Consola::setModelo(int op)
{
	modelo = "";
}
string Consola::getModelo()
{
	return modelo;
}

// estado
void Consola::setEstado(int op)
{
	if(op == 1)
		estado = "Nuevo";
	else if(op == 2)
		estado = "Semi-Nuevo";
	else if(op == 3)
		estado = "Usado";
	else
		estado = "Usado";
}
string Consola::getEstado()
{
	return estado;
}

// numSerie
void Consola::setNumSerie(string numSerie)
{
	numSerie = "";
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
