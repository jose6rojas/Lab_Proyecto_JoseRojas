// Proyecto del Laboratorio de Programacion III - Jose Rojas - 11541234

#include <iostream>
#include <ctime>
#include <sstream>
#include <fstream>
#include <stdlib.h>
// #include <time>
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
void crearAdmin();
Administrador* cargarAdmin();
string generarNumSerie();

int main()
{
	crearAdmin();
	Administrador* admin;
	
	Inventario* I = new Inventario();
	I -> leerConsolas();
	
	// vector<Consola*> consoles;
	// vector<VideoJuego*> videoGames;
	
	cout << "Proyecto del Laboratorio de Programacion III\n" << "Jose Rojas\n" << "11541234\n" << endl;
	int op_inicial;
	cout << "¿Ingresara al sistema como 1. Administrador o 2. Vendedor?: ";
	cin >> op_inicial;
	
	if(op_inicial == 1) // Administrador
	{
		admin = cargarAdmin();
		
		cout << "\nBienvenido, Administrador, por favor verifique su informacion." << endl;
		
		string nombre;
		cout << "Ingrese su nombre: ";
		cin >> nombre;
		if(nombre != admin -> getNombre())
			cout << "El nombre que ingreso es incorrecto." << endl;
		else
		{
			string contrasena;
			cout << "Ingrese su contrasena: ";
			cin >> contrasena;
			if(contrasena != admin -> getContrasena())
				cout << "La contrasena que ingreso es incorrecta." << endl;
			else
			{
				cout << "\n¡Bienvenido al sistema, Administrador!\n" << endl;
				
				int op_admin;
				cout << "¿Que desea hacer el dia de hoy?" << endl;
				cout << "1. Agregar al Inventario" << endl;
				cout << "2. Modificar del Inventario" << endl;
				cout << "3. Eliminar del Inventario" << endl;
				cout << "4. Salir" << endl;
				cout << "Escoja una opcion: ";
				cin >> op_admin;
				if(op_admin == 1) // Agregar al Inventario
				{
					vector<Consola*> consoles;
					int op_admin_1 = 0;
					while(op_admin_1 != 3)
					{
						cout << "\nAdministrador - Agregar al Inventario" << endl;
						cout << "1. Consola" << endl;
						cout << "2. Video Juego" << endl;
						cout << "3. Salir" << endl;
						cout << "Escoja una opcion: ";
						cin >> op_admin_1;
						if(op_admin_1 == 1) // Consola
						{
							cout << "\nAgregar Consola" << endl;
							
							// estado
							bool estado;
							int op_estado;
							cout << "Estado" << endl;
							cout << "1. Nuevo" << endl;
							cout << "2. Usado" << endl;
							cout << "Escoja un estado: ";
							cin >> op_estado;
							if(op_estado == 1)
								estado = true;
							else
								estado = false;
							
							// numSerie
							string numSerie = generarNumSerie();
							// TODO: validar numSerie
							
							int op_consola;
							cout << "\n¿Cual es la empresa de la Consola que desea agregar?" << endl;
							cout << "1. Microsoft" << endl;
							cout << "2. Sony" << endl;
							cout << "3. Nintendo" << endl;
							cout << "4. Salir" << endl;
							cout << "Escoja una opcion: ";
							cin >> op_consola;
							if(op_consola == 1) // Microsoft
							{
								Microsoft* M = new Microsoft();
								
								M -> setEstado(estado);
								M -> setNumSerie(numSerie);
								
								// modelo
								int op_modelo;
								cout << "\nMicrosoft - Modelo" << endl;
								cout << "1. Xbox" << endl;
								cout << "2. Xbox 360" << endl;
								cout << "3. Xbox One" << endl;
								cout << "Escoja un modelo: ";
								cin >> op_modelo;
								M -> setModelo(op_modelo);
								
								// precio
								double precio;
								cout << "\nIngrese el precio en $: ";
								cin >> precio;
								M -> setPrecio(precio);
								
								consoles.push_back(M);
								
								ofstream archivo("Consolas.txt", std::ios_base::app);
        							if(archivo.is_open())
        							{
                							for(int i = 0; i < consoles.size(); i++)
                							{
                        							archivo << consoles[i] -> getModelo() << ' ';
                        							archivo << consoles[i] -> getYear() << ' ';
                        							archivo << consoles[i] -> getEstado() << ' ';
                        							archivo << consoles[i] -> getNumSerie() << ' ';
                        							archivo << consoles[i] -> getPrecio() << endl;
                							}
                							archivo.close();
									cout << "\nConsola Microsoft agregada correctamente" << endl;
        							}
        							else
                							cout << "No se pudo abrir el archivo." << endl;
							}
							else if(op_consola == 2) // Sony
							{
								Sony* S = new Sony();
								
								S -> setEstado(estado);
								S -> setNumSerie(numSerie);
								
								int op_modelo;
								cout << "\nSony - Modelo" << endl;
								cout << "1. PlayStation 1" << endl;
								cout << "2. PlayStation 2" << endl;
								cout << "3. PlayStation 3" << endl;
								cout << "4. PlayStation 4" << endl;
								cout << "5. PSP" << endl;
								cout << "6. PS Vita" << endl;
								cout << "Escoja un modelo: ";
								cin >> op_modelo;
								S -> setModelo(op_modelo);
								
								double precio;
                                                                cout << "\nIngrese el precio en $: ";
                                                                cin >> precio;
                                                                S -> setPrecio(precio);
								
								consoles.push_back(S);
								
                                                                ofstream archivo("Consolas.txt", std::ios_base::app);
                                                                if(archivo.is_open())
                                                                {
                                                                        for(int i = 0; i < consoles.size(); i++)
                                                                        {
                                                                                archivo << consoles[i] -> getModelo() << ' ';
                                                                                archivo << consoles[i] -> getYear() << ' ';
                                                                                archivo << consoles[i] -> getEstado() << ' ';
                                                                                archivo << consoles[i] -> getNumSerie() << ' ';
                                                                                archivo << consoles[i] -> getPrecio() << endl;
                                                                        }
                                                                        archivo.close();
                                                                        cout << "\nConsola Sony agregada correctamente" << endl;
                                                                }
                                                                else
                                                                        cout << "No se pudo abrir el archivo." << endl;

							}
							else if(op_consola == 3) // Nintendo
							{
								Nintendo* N = new Nintendo();
								
								N -> setEstado(estado);
								N -> setNumSerie(numSerie);
								
								int op_modelo;
								cout << "\nNintendo - Modelo" << endl;
								cout << "1. Nintendo Entertainment System" << endl;
								cout << "2. Super Nintendo Entertainment System" << endl;
								cout << "3. Nintendo 64" << endl;
								cout << "4. Nintendo GameCube" << endl;
								cout << "5. Nintendo Wii" << endl;
								cout << "6. Nintendo Wii U" << endl;
								cout << "7. Nintendo Switch" << endl;
								cout << "8. Game Boy" << endl;
								cout << "9. Game Boy Color" << endl;
								cout << "10. Game Boy Advance" << endl;
								cout << "11. Nintendo DS" << endl;
								cout << "12. Nintendo DSi" << endl;
								cout << "13. Nintendo 3DS" << endl;
								cout << "14. New Nintendo 3DS" << endl;
								cout << "Escoja un modelo: ";
								cin >> op_modelo;
								N -> setModelo(op_modelo);
								
								double precio;
								cout << "\nIngrese el precio en $: ";
								cin >> precio;
								N -> setPrecio(precio);
								
								consoles.push_back(N);
								
                                                                ofstream archivo("Consolas.txt", std::ios_base::app);
                                                                if(archivo.is_open())
                                                                {
                                                                        for(int i = 0; i < consoles.size(); i++)
                                                                        {
                                                                                archivo << consoles[i] -> getModelo() << ' ';
                                                                                archivo << consoles[i] -> getYear() << ' ';
                                                                                archivo << consoles[i] -> getEstado() << ' ';
                                                                                archivo << consoles[i] -> getNumSerie() << ' ';
                                                                                archivo << consoles[i] -> getPrecio() << endl;
                                                                        }
                                                                        archivo.close();
                                                                        cout << "\nConsola Nintendo agregada correctamente" << endl;
                                                                }
                                                                else
                                                                        cout << "No se pudo abrir el archivo." << endl;
							}
							else
								cout << "Debe escoger una opcion valida." << endl;
						}
						else if(op_admin_1 == 2) // VideoJuego
						{
						}
						else if(op_admin_1 == 3) // Salir
						{
							// break;
						}
						/* else
							cout << "Debe escoger una opcion valida." << endl; */
					}
        				for(int i; i < consoles.size(); i++)
                				delete consoles[i];
        				consoles.clear();
				}
				else if(op_admin == 2) // Modificar del Inventario
				{
                                        /* int op_admin_2 = 0;
                                        while(op_admin_2 != 3)
                                        {
                                                cout << "¿Que desea modificar?" << endl;
                                                cout << "1. Consola" << endl;
                                                cout << "2. Video Juego" << endl;
                                                cout << "3. Salir" << endl;
						cout << "Escoja una opcion: ";
                                                cin >> op_admin_2;
                                                if(op_admin_2 == 1)
                                                {
                                                }
                                                else if(op_admin_2 == 2)
                                                {
                                                }
                                                else if(op_admin_2 == 3)
                                                        break;
                                                else
                                                        cout << "Debe escoger una opcion valida." << endl */
				}
				else if(op_admin == 3) // Eliminar del Inventario
				{
					/* int op_admin_3 = 0;
                                        while(op_admin_3 != 3)
                                        {
                                                cout << "¿Que desea eliminar?" << endl;
                                                cout << "1. Consola" << endl;
                                                cout << "2. Video Juego" << endl;
                                                cout << "3. Salir" << endl;
						cout << "Escoja una opcion: ";
                                                cin >> op_admin_3;
                                                if(op_admin_3 == 1)
                                                {
                                                }
                                                else if(op_admin_3 == 2)
                                                {
                                                }
                                                else if(op_admin_3 == 3)
                                                        break;
                                                else
                                                        cout << "Debe escoger una opcion valida." << endl */
				}
				else if(op_admin == 4) // Salir
				{
					// break;
				}
				/* else
					cout << "Debe escoger una opcion valida." << endl; */
			}
		}
		
	}
	else if(op_inicial == 2) // Vendedor
	{	
		/* Vendedor* V = new Vendedor();
		
		string nombre;
		cout << "Ingrese su nombre: ";
		cin >> nombre;
		
		string horaEntrada;
		time_t t1 = time(0);
		struct tm* now1 = localtime(&t1);
		stringstream ss1;
		ss1 << now1 -> tm_hour << ':' << now1 -> tm_min << ':' << now1 -> tm_sec;
		horaEntrada = ss1.str();
		
		time_t t2;
		struct tm* now2;
		
		V -> setNombre(nombre);
		V -> setHoraEntrada(horaEntrada);
		
		int op_vdor;
		cout << "¿Que desea hacer el dia de hoy?" << endl;
		cout << "1. Agregar al Inventario" << endl;
		cout << "2. Vender" << endl;
		cout << "3. Salir" << endl;
		cout << "Escoja una opcion: ";
		cin >> op_vdor;
		
		if(op_vdor == 1) // Agregar al Inventario
		{
			int op_vdor_1 = 0;
			while(op_vdor_1 != 3)
            		{
                        	cout << "¿Que desea agregar?" << endl;
                                cout << "1. Consola" << endl;
                                cout << "2. Video Juego" << endl;
                                cout << "3. Salir" << endl;
                                cout << "Escoja una opcion: ";
                                cin >> op_vdor_1;
                                if(op_vdor_1 == 1)
                                {
                                }
                                else if(op_vdor_1 == 2)
                                {
                                }
                                else if(op_vdor_1 == 3)
                                	break;
                                else
                                	cout << "Debe escoger una opcion valida." << endl;
			}
		}
		else if(op_vdor == 2) // Vender
		{
			int op_vdor_2 = 0;
                        while(op_vdor_2 != 3)
                        {
                                cout << "¿Que desea vender?" << endl;
                                cout << "1. Consola" << endl;
                                cout << "2. Video Juego" << endl;
                                cout << "3. Salir" << endl;
                                cout << "Escoja una opcion: ";
                                cin >> op_vdor_2;
                                if(op_vdor_2 == 1)
                                {
                                }
                                else if(op_vdor_2 == 2)
                                {
                                }
                                else if(op_vdor_2 == 3)
                                        break;
                                else
                                        cout << "Debe escoger una opcion valida." << endl;
                        }
		}
		else if(op_vdor == 3)
		{
                 	string horaSalida;
                	t2 = time(0);
                	now2 = localtime(&t2);
                	stringstream ss2;
                	ss2 << now2 -> tm_hour << ':' << now2 -> tm_min << ':' << now2 -> tm_sec;
                	horaSalida = ss2.str();
			V -> setHoraSalida(horaSalida);
			break;
		}
		else
			cout << "Debe escogar una opcion valida." << endl;
		
		delete now2;
		delete now1;
		delete V; */
	}
	else
		cout << "Debe escoger una opcion valida." << endl;
	
	/* for(int i; i < consoles.size(); i++)
		delete consoles[i];
	consoles.clear(); */
	/* for(int i; i < videoGames.size(); i++)
		delete videoGames[i];
	videoGames.clear(); */
	delete I;
	delete admin;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/* time_t t = time(0);
	struct tm* now = localtime(&t);
	// cout << (now -> tm_mday) << '/' << (now -> tm_mon + 1) << '/' << (now -> tm_year + 1900) << ' ' << (now -> tm_hour) << ':' << (now -> tm_min) << ':' << (now -> tm_sec) << endl;
	
	stringstream ss;
	ss << now -> tm_hour << ':' << now -> tm_min << ':' << now -> tm_sec;
	cout << ss.str() << endl;
	
	time_t timev;
	time(&timev);
	cout << timev << endl;
	
	Nintendo* N = new Nintendo();
	N -> setModelo(4);
	N -> setEstado(true);
	N -> setNumSerie("1234");
	N -> setPrecio(399.99);
	
	I -> setConsola(N);
	I -> escribirConsolas();
	
	delete N;
	delete I;
	
	I -> leerConsolas();
	for(int i = 0; i < I -> consolas.size(); i++)
	{
		cout << I -> consolas[i] -> getYear() << endl;
		cout << I -> consolas[i] -> getModelo() << endl;
		cout << I -> consolas[i] -> getEstado() << endl;
		cout << I -> consolas[i] -> getNumSerie() << endl;
		cout << I -> consolas[i] -> getPrecio() << endl;
	}
	
	delete I; */
	
	return 0;
} // main

void crearAdmin()
{
	ofstream archivoAdmin("Administrador.txt");
	if(archivoAdmin.is_open())
	{
		archivoAdmin << "admin" << ' ' << "contrasena";
		archivoAdmin.close();
	}
	else
		cout << "No se pudo abrir el archivo del Administrador." << endl;
}

Administrador* cargarAdmin()
{
	ifstream archivoAdmin("Administrador.txt");
	if(archivoAdmin.is_open())
	{
		string nombre;
		string contrasena;
		
		Administrador* A = new Administrador();
		
		while(archivoAdmin >> nombre >> contrasena)
		{
			A -> setNombre(nombre);
			A -> setContrasena(contrasena);
		}
		
		return A;
	}
	else
		cout << "No se pudo cargar el archivo del Administrador." << endl;
}

string generarNumSerie()
{
	stringstream ss;
	int n;
	int s;
	srand(time(0));
	n = rand()% 30 + 1985;
	s = rand()% 30 + 1985;
	ss << n;
	ss << s;
	return ss.str();
}

	                                /* int op_admin_1 = 0;
                                        while(op_admin_1 != 3)
                                        {
                                                cout << "¿Que desea agregar?" << endl;
                                                cout << "1. Consola" << endl;
                                                cout << "2. Video Juego" << endl;
                                                cout << "3. Salir" << endl;
                                                cin >> op_admin_1;
                                                if(op_admin_1 == 1)
                                                {
                                                }
                                                else if(op_admin_1 == 2)
                                                {
                                                }
                                                else if(op_admin_1 == 3)
                                                        break;
                                                else
                                                        cout << "Debe escoger una opcion valida." << endl */
















