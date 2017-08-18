#include <ncurses.h>
#include <iostream>
#include <string>
#include <sstream>
#include "Stark.h"
#include "Noble.h"
#include "Lannister.h"
#include "Guardia.h"
#include "Targaryen.h"
#include "Dothraki.h"
#include "Dragon.h"
using namespace std;

string Leer();
void Trono();

int main() {
	initscr();
	int opcion;
	Stark* stark = NULL;
	Lannister* lannister = NULL;
	Targaryen* targaryen = NULL;
	do {
		clear();
		addstr("*** Examen 1 ***\n");
		addstr("1. Agregar Familias Nobles\n");
		addstr("2. Agregar Ejercitos\n");
		addstr("3. Listar Ejercitos\n");
		addstr("4. Modificar Ejercitos\n");
		addstr("5. Eliminar Ejercitos\n");
		addstr("6. Simulacion\n");
		addstr("7. Salir\n");
		addstr("Ingrese su opción: ");
		//printw("%d", opcion);
		string cadena = Leer();
		opcion = stoi(cadena.c_str());
		clear();
		switch (opcion) {
			case 1: {
						addstr("-> Agregar Familias Nobles\n");
						addstr("1. Stairk\n");
						addstr("2. Lannister\n");
						addstr("3. Targaryen\n");
						addstr("Ingrese su opcion: ");
						string cadena2;
						cadena2 = Leer();
						int opcion2 = stoi(cadena2.c_str());
						clear();
						switch (opcion2) {
							case 1:{
									   if (stark == NULL) {
										   addstr("-> Datos Familia Stark\n");
										   addstr("Ingrese el jefe de familia: ");
										   string jefe_familia;
										   jefe_familia = Leer();
										   addstr("\n");
										   addstr("Ingrese la cantidad de lobos: ");
										   int lobos;
										   string cadena3 = Leer();
										   lobos = stoi(cadena3.c_str());
										   addstr("\n");
										   addstr("Ingrese el animal emblema: ");
										   string emblema;
										   emblema = Leer();
										   addstr("\n");
										   addstr("Ingrese el lema: ");
										   string lema;
										   jefe_familia = Leer();
										   addstr("\n");
										   addstr("Ingrese el nombre del guerrero mas valioso: ");
										   string guerrero;
										   guerrero = Leer();
										   stark = new Stark(jefe_familia, lobos, emblema, lema, guerrero);
										   addstr("\n");
										   addstr("Familia Stark Creada!!");
									   } else {
										   addstr("Ya esta Creada la Familia Stark!!");
									   }
								   }break;
							case 2:{
									   if (lannister == NULL) {
										   addstr("-> Datos Familia Lannister\n");
										   addstr("Ingrese el jefe de familia: ");
										   string jefe_familia;
										   jefe_familia = Leer();
										   addstr("\n");
										   addstr("Ingrese el animal emblema: ");
										   string emblema;
										   emblema = Leer();
										   addstr("\n");
										   addstr("Ingrese el lema: ");
										   string lema;
										   jefe_familia = Leer();
										   addstr("\n");
										   addstr("Ingrese la cantidad de dinero: ");
										   int dinero;
										   string cadena3 = Leer();
										   dinero = stoi(cadena3.c_str());
										   addstr("\n");
										   addstr("Ingrese la fuerza de la montaña: ");
										   string fuerza;
										   fuerza = Leer();
										   lannister = new Lannister(jefe_familia, emblema, lema, dinero, fuerza);
										   addstr("\n");
										   addstr("Familia Lannister Creada!!");
									   } else {
										   addstr("Ya esta Creada la Familia Lannister!!");
									   }
								   }break;
							case 3:{
									   if (targaryen == NULL) {
										   addstr("-> Datos Familia Lannister\n");
										   addstr("Ingrese el nombre de la reina: ");
										   string reina;
										   reina = Leer();
										   addstr("\n");
										   addstr("Ingrese el animal emblema: ");
										   string emblema;
										   emblema = Leer();
										   addstr("\n");
										   addstr("Ingrese el lema: ");
										   string lema;
										   lema = Leer();
										   addstr("\n");
										   targaryen = new Targaryen(reina, emblema, lema);
										   addstr("Familia Targaryen Creada!!");
									   } else {
										   addstr("Ya esta Creada la Familia Targaryen!!");
									   }
								   }break;
						}
					}break;
			case 2:{
					   addstr("No Modifica!");
				   }break;
			case 3:{
						addstr("No Lista, pero ver codigo!");
					/*addstr("Familia Stark:\n");
					addstr("Jefe de Familia: ";
					addstr(stark->getJefe());
					addstr("\nCantidad de Lobos: "); <<stark->getLobo() 
					addstr("\nAnimal Emblema: "); <<stark->getEmblema()
					addstr("\nLema: "); <<stark->getLema()
					addstr("\nGuerrero mas valioso: ") <<stark->getGuerrero()

					   //Aqui va lo de imprimir ejercitos

					addstr("\nFamilia Lannister") <<endl
					addstr("\nJefe de Familia: ") <<lannister->getJefe()
					addstr("\nAnimal Emblema: ") <<lannister->getEmblema() 
					addstr("\nLema: ") <<lannister->getLema() 
					addstr("\nCantidad de dinero: ") <<lannister->getDinero() <<endl
					addstr("\nFuerza de Montana: ") <<lannister->getMontana() <<endl;

					   //Aqui va lo de imprimir ejercitos

					addstr("\nFamilia Targaryen:") 
					addstr("\nReina: ") <<targaryen->getReina <<endl
					addstr("\nAnimal Emblema: ") <<targaryen->getEmblema <<endl
					addstr("\nLema: ") <<targaryen->getLema <<endl;
					
					   //Aqui va lo de imprimir dothraki y dragones*/

				   }break;
			case 4:{
					   addstr("No Modifica!");
				   }break;
			case 5:{
					   addstr("No Elimina!");
				   }break;
			case 6:{
						addstr("No Simula!");
				   }break;
			case 7:{
					   addstr("Hasta Pronto!!");
					   Trono();	
				   }break;
		}
		getch();
		refresh();
	} while (opcion != 7);	
	endwin();
	delete stark;
	delete lannister;
	delete targaryen;
	return 0;
}

string Leer() {
	char caracter3;
	stringstream ss3;
	caracter3 = getch();
	string cadena3;
	while (caracter3 != '\n') {
		ss3 << caracter3;
		caracter3 = getch();
	}
	cadena3 = ss3.str();
	return cadena3;
}

void Trono() {
	addstr("        Trono de Hierro:\n");
	addstr("             )|||/\n");
	addstr("          ))))|||////\n");
	addstr("        ))))))|||//////\n");
	addstr("       ))/)))))|/////)//\n");
	addstr("      )/*))))))|)))))/*)/\n");
	addstr("      ))/*)))))|/////*)//\n");
	addstr("      )))/*))))|////*)///\n");
	addstr("      ))))//)))|///))////\n");
	addstr("        )))_)))|///_///\n");
	addstr("          |*|_____|*|\n");
	addstr("         /|||**|**|||)\n");
	addstr("        /*|||*|*|*|||*)\n");
	addstr("       /__|_|_____|_|__)\n");
}
