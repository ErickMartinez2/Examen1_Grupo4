#ifndef TARGARYEN_H
#define TARGARYEN_H
#include "Dragon.h"
#include "Dothraki.h"
#include <string>
using namespace std;

class Targaryen{
	private:
		string reina;
		string emblema;
		string lema;
		Dothraki** dothrakis;
		Dragon** dragones;
	public:
		Targaryen();
		Targaryen(string, string, string);
		string getReina();
		string getEmblema();
		string getLema();
		Dothraki** getDothrakis();
		Dragon** getDragon();
		void setReina(string);
		void setEmblema(string);
		void setLema(string);
		void setDothrakis(Dothraki**);
		void setDragones(Dragon**);
};
#endif
