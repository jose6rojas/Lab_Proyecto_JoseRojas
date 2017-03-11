// NintendoVG.h - hija de VideoJuego

#include "VideoJuego.h"

#ifndef NINTENDOVG_H
#define NINTENDOVG_H

class NintendoVG : public VideoJuego
{
        public:
                NintendoVG();
                NintendoVG(string, string, Consola*, int, string, bool, string, double);
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
		
		// ~NintendoVG();
};

#endif
