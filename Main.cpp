#include <ncurses.h>

int main() {
	initscr();
	int opcion = 2;
	addstr("*** Examen 1 ***\n");
	addstr("1. Agregar Familias Nobles\n");
	addstr("2. Agregar Ejercitos\n");
	addstr("3. Listar Ejercitos\n");
	addstr("4. Modificar Ejercitos\n");
	addstr("5. Eliminar Ejercitos\n");
	addstr("6. Simulacion\n");
	addstr("7. Salir\n");
	addstr("Ingrese su opción: \n");
	printw("%d", opcion);
	refresh();
	getch();
	endwin();
	return 0;
}
