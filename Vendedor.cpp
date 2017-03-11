// Vendedor.cpp - hijo de Usuario

#include "Vendedor.h"

Vendedor::Vendedor()
{
}
Vendedor::Vendedor(string nombre, string horaEntrada, string horaSalida) : Usuario(nombre)
{
	this -> horaEntrada = horaEntrada;
	this -> horaSalida = horaSalida;
}

void Vendedor::setHoraEntrada(string horaEntrada)
{
	this -> horaEntrada = horaEntrada;
}
string Vendedor::getHoraEntrada()
{
	return horaEntrada;
}
void Vendedor::setHoraSalida(string horaSalida)
{
	this -> horaSalida = horaSalida;
}
string Vendedor::getHoraSalida()
{
	return horaSalida;
}
