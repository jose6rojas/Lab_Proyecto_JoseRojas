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
		Usuario* comprador;
		double subtotal;
	public:
		Venta();
		Venta(string, string, Usuario*, double); // nombreCliente, horaFinalizacion, comprador, subtotal
		
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
		void setComprador(Usuario*);
		Usuario* getComprador();
		// subtotal
		void setSubtotal(double);
		double getSubtotal();
		
		~Venta();
};

#endif
