#include <ncurses.h>
#include <iostream>
#include <string>
#include <sstream>
#include "Stark.h"
#include "Noble.h"
#include "Lannister.h"
#include "Guardia.h"
using namespace std;

string Leer();
void Trono();

int main() {
	initscr();
	int opcion;
	Stark* stark = NULL;
	Lannister* lannister = NULL;
	//Targaryen* targaryen = NULL;
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
		/*char caracter;
		stringstream ss;
		string cadena;
		caracter = getch();
		while (caracter != '\n') {
			ss << caracter;
			caracter = getch();
		}*/
		string cadena = leer;
		opcion = stoi(cadena.c_str());
		clear();
		switch (opcion) {
			case 1: {
						addstr("-> Agregar Familias Nobles\n");
						addstr("1. Stairk\n");
						addstr("2. Lannister\n");
						addstr("3. Targaryen\n");
						addstr("Ingrese su opcion: ");
						/*char caracter2;
						stringstream ss2;*/
						string cadena2;
						/*caracter2 = getch();
						while (caracter2 != '\n') {
							ss2 << caracter2;
							caracter2 = getch();
						}*/
						cadena2 = ss2.str();
						int opcion2 = stoi(cadena2.c_str());
						clear();
						switch (opcion2) {
							case 1:
								if (stark == NULL) {
									addstr("-> Datos Familia Stark\n");
									addstr("Ingrese el jefe de familia: ");
									string jefe_familia;
									char caracter3;
									stringstream ss3;
									caracter2 = getch();
									while (caracter3 != '\n') {
										ss3 << caracter3;
										caracter3 = getch();
									}
									jefe_familia = ss3.str();
									addstr("\n");
									addstr("Ingrese la cantidad de lobos: ");
									int lobos;
									char caracter4;
									stringstream ss4;
									string cadena4;
									caracter4 = getch();
									while (caracter4 != '\n') {
										ss4 << caracter4;
										caracter4 = getch();
									}
									cadena4 = ss4.str();
									lobos = stoi(cadena4.c_str());
									addstr("\n");
									addstr("Ingrese el animal emblema: ");
									string emblema;
									char caracter5;
									stringstream ss5;
									caracter5 = getch();
									while (caracter5 != '\n') {
										ss5 << caracter5;
										caracter5 = getch();
									}
									emblema = ss5.str();
									addstr("\n");
									addstr("Ingrese el lema: ");
									string lema;
									char caracter6;
									stringstream ss6;
									caracter6 = getch();
									while (caracter6 != '\n') {
										ss6 << caracter6;
										caracter6 = getch();
									}
									jefe_familia = ss6.str();
									addstr("\n");
									addstr("\n");
									string guerrero;
									stark = new Stark();
									addstr("Familia Stark Creada!!");
								} else {
									addstr("Ya esta Creada la Familia Stark!!");
								}
								break;
							case 2:
								if (lannister == NULL) {
									lannister = new Lannister();
									addstr("Familia Lannister Creada!!");
								} else {
									addstr("Ya esta Creada la Familia Lannister!!");
								}
								break;
								/*case 3:
								  if (targaryen != NULL) {
								  targaryen = new Targaryen();
								  addstr("Familia Targaryen Creada!!");
								  } else {
								  addstr("Ya esta Creada la Familia Targaryen!!");
								  }
								  break;*/
						}
					}break;
			case 2:{
					   addstr("Esta en la opcion 2!");
				   }break;
			case 3:{
					   addstr("Esta en la opcion 3!");
				   }break;
			case 4:{
					   addstr("Esta en la opcion 4!");
				   }break;
			case 5:{
					   addstr("Esta en la opcion 5!");
				   }break;
			case 6:{
				   }break;
			case 7:{
					   addstr("Hasta Pronto!!");
				   }break;
		}
		getch();
		refresh();
	} while (opcion != 7);
	/*clear();
	getch();
	string ca = Leer();
	printw(ca.c_str());
	getch();*/
	endwin();
	delete stark;
	delete lannister;
	//delete targaryen;
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
	addstr("\n");
	addstr("\n");
	addstr("\n");
	addstr("\n");
	addstr("\n");
	addstr("\n");
	addstr("\n");
	addstr("\n");
	addstr("\n");
	addstr("\n");
	addstr("************************************\n");
}
