// martes, 7 de marzo de 2017
// Consola.h

#include <string>

using namespace std;

#ifndef CONSOLA_H
#define CONSOLA_H

class Consola
{
	protected:
		string year;
		string modelo;
		string estado;
		string numSerie;
		double precio;
	public:
		// Constructores
		Consola();
		Consola(string, string, string, string, double);
		
		// Setters y Getters
		// year
		void setYear(string);
		string getYear();
		
		// modelo
		void setModelo(int);
		string getModelo();
		
		// estado
		void setEstado(int);
		string getEstado();
		
		// numSerie
		void setNumSerie(string);
		string getNumSerie();
		
		// precio
		void setPrecio(double);
		double getPrecio();
};

#endif
