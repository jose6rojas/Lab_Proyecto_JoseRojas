// Venta.cpp

#include "Venta.h"

Venta::Venta()
{
}
Venta::Venta(string nombreCliente, string horaFinalizacion, Usuario* vendedor, double subtotal)
{
	this -> nombreCliente = nombreCliente;
	this -> horaFinalizacion = horaFinalizacion;
	this -> vendedor = vendedor;
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
void Venta::setVendedor(Usuario* comprador)
{
	this -> vendedor = vendedor;
}
Usuario* Venta::getVendedor()
{
	return vendedor;
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
	delete vendedor;
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
