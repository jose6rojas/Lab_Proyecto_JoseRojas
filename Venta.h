// Venta.h

#include <string>
#include <vector>
#include "Consola.h"
#include "VideoJuego.h"
#include "Usuario.h"

using namespace std;

#ifndef VENTA_H
#define VENTA_H

class Venta
{
	private:
		string nombreCliente;
		vector<Consola*> listaConsolas;
		vector<VideoJuego*> listaVGs;
		string horaFinalizacion;
		Usuario* vendedor;
		double subtotal;
	public:
		Venta();
		Venta(string, string, Usuario*, double); // nombreCliente, horaFinalizacion, vendedor, subtotal
		
		// nombreCliente
		void setNombreCliente(string);
		string getNombreCliente();
		// listaConsolas
		void setConsola(Consola*);
		Consola* getConsola(int);
		// listaVGs
		void setVG(VideoJuego*);
		VideoJuego* getVG(int);
		// horaFinalizacion
		void setHoraFin(string);
		string getHoraFin();
		// comprador
		void setVendedor(Usuario*);
		Usuario* getVendedor();
		// subtotal
		void setSubtotal(double);
		double getSubtotal();
		
		~Venta();
};

#endif
