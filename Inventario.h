// Inventario.h

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include "Consola.h"
#include "Microsoft.h"
#include "Sony.h"
#include "Nintendo.h"
#include "VideoJuego.h"

using namespace std;

#ifndef INVENTARIO_H
#define INVENTARIO_H

class Inventario
{
	public:
		vector<Consola*> consolas;
		vector<VideoJuego*> VGs;
	public:
		Inventario();
		
		void setConsola(Consola*);
		Consola* getConsola(int);
		void setVG(VideoJuego*);
		VideoJuego* getVG(int);
		
		void leerConsolas();
		void escribirConsolas();
		
		void leerVGs();
		void escribirVGs();
		
		int verificarConsola(string);
		
		~Inventario();
};

#endif
