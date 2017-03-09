// Microsoft.h - hija de Consola

#include "Consola.h"

#ifndef MICROSOFT_H
#define MICROSOFT_H

class Microsoft : public Consola
{
	public:
		// Constructores
		Microsoft();
		Microsoft(string, string, bool, string, double); // year, modelo, estado, numSerie, precio
		
		// Setters y Getters de la clase padre
		virtual void setYear(string);
		virtual string getYear();
		virtual void setEstado(bool);
		virtual string getEstado();
		virtual void setNumSerie(string);
		virtual string getNumSerie();
		virtual void setPrecio(double);
		virtual double getPrecio();
		
		// Setter y Getter para modelo
		void setModelo(int);
		string getModelo();
};

#endif