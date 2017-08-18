#include <ncurses.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	initscr();
	int opcion;
	do {
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
		char caracter;
		stringstream ss;
		string cadena;
		caracter = getch();
		while (caracter != '\n') {
			ss << caracter;
			caracter = getch();
		}
		cadena = ss.str();
		opcion = stoi(cadena.c_str());
		clear();
		switch (opcion) {
			case 1:
				addstr("Opcion 1");
				break;
			case 2:
				addstr("Esta en la opcion 2!");
				break;
			case 3:
				addstr("Esta en la opcion 3!");
				break;
			case 4:
				addstr("Esta en la opcion 4!");
				break;
			case 5:
				addstr("Esta en la opcion 5!");
				break;
			case 6:
				addstr("Esta en la opcion 6!");
				break;
			case 7:
				addstr("Hasta Pronto!!");
				break;
		}
		getch();
		refresh();
	} while (opcion != 7);
	endwin();
	return 0;
}
