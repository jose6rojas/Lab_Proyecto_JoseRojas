// Inventario.cpp

#include "Inventario.h"

Inventario::Inventario()
{
}

void Inventario::setConsola(Consola* C)
{
	consolas.push_back(C);
}
Consola* Inventario::getConsola(int i)
{
	return consolas[i];
}
void Inventario::setVG(VideoJuego* VG)
{
	VGs.push_back(VG);
}
VideoJuego* Inventario::getVG(int i)
{
	return VGs[i];
}

void Inventario::leerConsolas()
{
	ifstream archivo("Consolas.txt");
	
	if(archivo.is_open())
	{
		string year;
		string modelo;
        	string estado;
        	string numSerie;
        	double precio;
		
		Microsoft* M;
		Sony* S;
		Nintendo* N;
		
		int v; // Valor obtenido de verificarConsola().
		
		while(archivo >> modelo >> year >> estado >> numSerie >> precio)
		{
			v = verificarConsola(modelo);
			// Microsoft
			if(v == 1)
			{
				M = new Microsoft();
				
				M -> setModelo(modelo);
				M -> setYear(year);
				if(estado == "Nuevo")
					M -> setEstado(true);
				else
					M -> setEstado(false);
				M -> setNumSerie(numSerie);
				M -> setPrecio(precio);
				
				consolas.push_back(M);
			}
			// Sony
			else if(v == 2)
			{
				S = new Sony();
				
                                S -> setModelo(modelo);
                                S -> setYear(year);
                                if(estado == "Nuevo")
                                        M -> setEstado(true);
                                else
                                        M -> setEstado(false);
                                S -> setNumSerie(numSerie);
                                S -> setPrecio(precio);
				
				consolas.push_back(S);
			}
			// Nintendo
			else // v == 3
			{
				N = new Nintendo();
				
				N -> setModelo(modelo);
				N -> setYear(year);
				if(estado == "Nuevo")
					N -> setEstado(true);
				else
					N -> setEstado(false);
        			N -> setNumSerie(numSerie);
        			N -> setPrecio(precio);
				
				consolas.push_back(N);
			}
		}
		cout << "La informacion fue leida correctamente." << endl;
	}
	else
		cout << "No se pudo leer el archivo." << endl;
}

void Inventario::escribirConsolas()
{
	ofstream archivo("Consolas.txt", std::ios_base::app);
	if(archivo.is_open())
	{
		for(int i = 0; i < consolas.size(); i++)
		{
			archivo << consolas[i] -> getModelo() << ' ';
			archivo << consolas[i] -> getYear() << ' ';
			archivo << consolas[i] -> getEstado() << ' ';
			archivo << consolas[i] -> getNumSerie() << ' ';
			archivo << consolas[i] -> getPrecio() << endl;
		}
		cout << "La informacion fue escrita correctamente." << endl;
		archivo.close();
	}
	else
		cout << "No se pudo abrir el archivo." << endl;
}

void Inventario::leerVGs() {}

void Inventario::escribirVGs() {}

Inventario::~Inventario()
{
	for(int i; i < consolas.size(); i++)
		delete consolas[i];
	consolas.clear();
	for(int i; i < VGs.size(); i++)
		delete VGs[i];
	VGs.clear();
}

int Inventario::verificarConsola(string m) // De acuerdo al modelo leido del archivo, verifica que tipo de Consola se instanciara.
{
	/* bool verified;
	if (verified == false)
	{ */
		// Busca en Microsoft
		if(m == "Xbox")
			return 1;
		else if(m == "Xbox_360")
			return 1;
		else if(m == "Xbox_One")
			return 1;
	// }
	/* if(verified == false)
	{ */
		// Busca en Sony
		else if(m == "PlayStation_1")
			return 2;
		else if(m == "PlayStation_2")
			return 2;
		else if(m == "PlayStation_3")
			return 2;
		else if(m == "PlayStation_4")
			return 2;
		else if(m == "PSP")
			return 2;
		else if(m == "PS_Vita")
			return 2;
	// }
	/* if(verified == false)
	{ */
		// Busca en Nintendo
		else if(m == "Nintendo_Entertainment_System")
			return 3;
		else if(m == "Super_Nintendo_Entertainment_System")
			return 3;
		else if(m == "Nintendo_64")
			return 3;
		else if(m == "Nintendo_GameCube")
			return 3;
		else if(m == "Nintendo_Wii")
			return 3;
		else if(m == "Nintendo_Wii_U")
			return 3;
		else if(m == "Nintendo_Switch")
			return 3;
		else if(m == "Game_Boy")
			return 3;
		else if(m == "Game_Boy_Color")
			return 3;
		else if(m == "Game_Boy_Advance")
			return 3;
		else if(m == "Nintendo_DS")
			return 3;
		else if(m == "Nintendo_DSi")
			return 3;
		else if(m == "Nintendo_3DS")
			return 3;
		else if(m == "New_Nintendo_3DS")
			return 3;
		else
			return 3;
	// }
}
