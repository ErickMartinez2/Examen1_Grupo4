#ifndef NOBLE_H
#define NOBLE_H
#include <string>
using namespace std;

class Noble{
	private:
		string nombre;
		string escudo;
		string lema;
		int ataque;
		int defensa;
	public:
		Noble();
		Noble(string, string, int, int);
		string getNombre();
		int getAtaque();
		int getDefensa();
		void setNombre(string);
		void setEscudo(string);
		void setLema(string);
		void setAtaque(int);
		void setDefensa(int);
}
