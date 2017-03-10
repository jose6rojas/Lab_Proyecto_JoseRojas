// VideoJuego.h

#include <string>
#include "Consola.h"

using namespace std;

#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

class VideoJuego
{
	protected:
		string nombre;
		string year;
		Consola* consola;
		int numJugadores;
		string genero;
		bool estado;
		string numSerie;
		double precio;
	public:
		VideoJuego();
		VideoJuego(string, string,  Consola*, int, string, bool, string, double);
		// nombre, year, Consola*, numJugadores, genero, estado, numSerie, precio
		
		// nombre
		void setNombre(string);
		string getNombre();
		// year
		void setYear(string);
		string getYear();
		// Consola*
		void setConsola(Consola*);
		Consola* getConsola();
		// numJugadores
		void setNumJugadores(int);
		int getNumJugadores();
		// genero
		void setGenero(int);
		string getGenero();
		// estado
		void setEstado(bool);
		string getEstado();
		// numSerie
		void setNumSerie(string);
		string getNumSerie();
		// precio
		void setPrecio(double);
		double getPrecio();
		
		~VideoJuego();
};

#endif
