#ifndef DOTHRAKI_H
#define DOTHRAKI_H
#include <string>
using namespace std;

class Dothraki{
	private:
		string nombre;
		string jefe;
		string caballo;
		string color;
		int ataque;
		int defensa;
	public:
		Dothraki();
		Dothraki(string, string, string, string, int, int);
		string getNombre();
		string getJefe();
		string getCaballo();
		string getColor();
		int getAtaque();
		int getDefensa();
		void setNombre(string);
		void setJefe(string);
		void setCaballo(string);
		void setColor(string);
		void setAtaque(int);
		void setDefensa(int);
};
#endif
