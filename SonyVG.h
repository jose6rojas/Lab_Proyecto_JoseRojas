// SonyVG.h - hija de VideoJuego

#include "VideoJuego.h"

#ifndef SONYVG_H
#define SONYVG_H

class SonyVG : public VideoJuego
{
	public:
		SonyVG();
		SonyVG(string, string, Consola*, int, string, bool, string, double);
		// nombre, year, Consola*, numJugadores, genero, estado, numSerie, precio
		
		// nombre
		/* virtual void setNombre(string);
		virtual string getNombre();
		// year
		virtual void setYear(string);
		virtual string getYear();
		// Consola*
		virtual void setConsola(Consola*);
		virtual Consola* getConsola();
		// numJugadores
		virtual void setNumJugadores(int);
		virtual int getNumJugadores();
		// genero
		virtual void setGenero(int);
		virtual string getGenero();
		// estado
		virtual void setEstado(bool);
		virtual string getEstado();
		// numSerie
		virtual void setNumSerie(string);
		virtual string getNumSerie();
		// precio
		virtual void setPrecio(double);
		virtual double getPrecio(); */
		
		// ~SonyVG();
};

#endif
