#ifndef GUARDIA_H 
#define GUARDIA_H
#include <string>
using namespace std;

class Guardia{
	private:
		string nombre;
		int edad;
		string soldado;
		int ataque;
		int defensa;
	public:
		Guardia();
		Guardia(string, int, string, int, int);
		string getNombre();
		int getEdad();
		string getSoldado();
		int getAtaque();
		int getDefensa();
		void setNombre(string);
		void setEdad(int);
		void setSoldado(string);
		void setAtaque(int);
		void setDefensa(int);
};
#endif
