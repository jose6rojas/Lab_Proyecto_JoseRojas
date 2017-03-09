// Sony.h - hija de Consola

#include "Consola.h"

#ifndef SONY_H
#define SONY_H

class Sony : public Consola
{
	public:
		Sony();
		Sony(string, string, bool, string, double); // year, modelo, estado, numSerie, precio
		
		virtual void setYear(string);
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
