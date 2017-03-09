// Consola.h

#include <string>

using namespace std;

#ifndef CONSOLA_H
#define CONSOLA_H

class Consola
{
	// Atributos
	protected:
		string year;
		string modelo;
		bool estado;
		string numSerie;
		double precio;
	public:
		// Constructores
		Consola();
		Consola(string, bool, string, double); // Todos los atributos menos year.
		
		// Setters y Getters
		// year
		// void setYear(string);
		string getYear();
		// estado
		void setEstado(bool); // Le da las opciones al usuario en el main.
		string getEstado();
		// numSerie
		void setNumSerie(string); // Se valida que sea unico en el main.
		string getNumSerie();
		// precio
		void setPrecio(double);
		double getPrecio();
};

#endif
