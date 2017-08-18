#ifndef LANNISTER_H
#define LANNISTER_H
#include "Guardia.h"
#include <string>

using namespace std;

class Lannister{
	private:
		string jefe;
		string emblema;
		string lema;
		Guardia** guardias;
		int dinero;
		string montana;

	public:
		Lannister();
		Lannister(string, string, string, Guardia**, int, string);
		string getJefe();
		string getEmblema();
		string getLema();
		Guardia** getGuardias();
		int getDinero();
		string getMontana();
		void setJefe(string);
		void setEmblema(string);
		void setLema(string);
		void setGuardias(Guardia**);
		void setDinero(int);
		void setMontana(string);
};
#endif
