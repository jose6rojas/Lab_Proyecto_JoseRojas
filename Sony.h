// Sony.h - hija de Consola

#include "Consola.h"

#ifndef SONY_H
#define SONY_H

class Sony : public Consola
{
	public:
		Sony();
		Sony(string, bool, string, double); // modelo, estado, numSerie, precio
		
		// virtual void setYear(string);
                /* virtual string getYear();
                virtual void setEstado(bool);
                virtual string getEstado();
                virtual void setNumSerie(string);
                virtual string getNumSerie();
                virtual void setPrecio(double);
                virtual double getPrecio(); */
		
		void setModelo(int);
		void setModelo(string);
		string getModelo();
		int getModelo(string);
};

#endif
