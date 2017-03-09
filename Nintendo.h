// Nintendo.h - hija de Consola

#include "Consola.h"

#ifndef NINTENDO_H
#define NINTENDO_H

class Nintendo : public Consola
{
	public:
		Nintendo();
		Nintendo(string, bool, string, double); // modelo, estado, numSerie, precio
		
		// virtual void setYear(string);
                virtual string getYear();
                virtual void setEstado(bool);
                virtual string getEstado();
                virtual void setNumSerie(string);
                virtual string getNumSerie();
                virtual void setPrecio(double);
                virtual double getPrecio();
		
		void setModelo(int);
		string getModelo();
};

#endif
