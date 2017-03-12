// Proyecto del Laboratorio de Programacion III - Jose Rojas - 11541234

#include <iostream>
#include "Consola.h"
#include "Microsoft.h"
#include "Sony.h"
#include "Nintendo.h"
#include "VideoJuego.h"
#include "MicrosoftVG.h"
#include "SonyVG.h"
#include "NintendoVG.h"
#include "Bandai.h"
#include "Konami.h"
#include "SquareEnix.h"
#include "ElectronicArts.h"
#include "SEGA.h"
#include "Ubisoft.h"
#include "Usuario.h"
#include "Administrador.h"
#include "Vendedor.h"
#include "Venta.h"
#include "Inventario.h"

using namespace std;

int main()
{
	Inventario* I = new Inventario();
	
	/* Nintendo* N = new Nintendo();
	N -> setModelo(4);
	N -> setEstado(true);
	N -> setNumSerie("1234");
	N -> setPrecio(399.99);
	
	I -> setConsola(N);
	I -> escribirConsolas();
	
	delete N;
	delete I; */
	
	I -> leerConsolas();
	for(int i = 0; i < I -> consolas.size(); i++)
	{
		cout << I -> consolas[i] -> getYear() << endl;
		cout << I -> consolas[i] -> getModelo() << endl;
		cout << I -> consolas[i] -> getEstado() << endl;
		cout << I -> consolas[i] -> getNumSerie() << endl;
		cout << I -> consolas[i] -> getPrecio() << endl;
	}
	
	delete I;
	
	return 0;
}
