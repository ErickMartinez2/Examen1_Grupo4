#ifndef DRAGON_H
#define DRAGON_H
#include <string>
using namespace std;

class Dragon{
	private:
		string nombre;
		string color;
		int tamano;
		int distancia;
		int ataque;
		int defensa;
	public:
		Dragon();
		Dragon(string, string, int, int, int, int);
		string getNombre();
		string getColor();
		int getTamano();
		int getDistancia();
		int getAtaque();
		int getDefensa();
		void setNombre(string);
		void setColor(string);
		void setTamano(int);
		void setDistancia(int);
		void setAtaque(int);
		void setDefensa(int);
};
#endif
