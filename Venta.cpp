// Venta.cpp

#include "Venta.h"

Venta::Venta()
{
}
Venta::Venta(string nombreCliente, string horaFinalizacion, Usuario* comprador, double subtotal)
{
	this -> nombreCliente = nombreCliente;
	this -> horaFinalizacion = horaFinalizacion;
	this -> comprador = comprador;
	this -> subtotal = subtotal;
}

// nombreCliente
void Venta::setNombreCliente(string nombreCliente)
{
	this -> nombreCliente = nombreCliente;
}
string Venta::getNombreCliente()
{
	return nombreCliente;
}
// listaConsolas
void Venta::setConsola(Consola* C)
{
	listaConsolas.push_back(C);
}
Consola* Venta::getConsola(int i)
{	
	return listaConsolas[i];
}
// listaVGs
void Venta::setVG(VideoJuego* VG)
{
	listaVGs.push_back(VG);
}
VideoJuego* Venta::getVG(int i)
{
	return listaVGs[i];
}
// horaFinalizacion
void Venta::setHoraFin(string horaFinalizacion)
{
	this -> horaFinalizacion = horaFinalizacion;
}
string Venta::getHoraFin()
{
	return horaFinalizacion;
}
// comprador
void Venta::setComprador(Usuario* comprador)
{
	this -> comprador = comprador;
}
Usuario* Venta::getComprador()
{
	return comprador;
}
// subtotal
void Venta::setSubtotal(double subtotal)
{
	this -> subtotal = subtotal;
}
double Venta::getSubtotal()
{
	return subtotal;
}

Venta::~Venta()
{
	delete comprador;
	for(int i; i < listaConsolas.size(); i++)
	{
		delete listaConsolas[i];
	}
	listaConsolas.clear();
	for(int i; i < listaVGs.size(); i++)
	{
		delete listaVGs[i];
	}
	listaVGs.clear();
}
