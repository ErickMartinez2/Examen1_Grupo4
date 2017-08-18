#ifndef STARK_H
#define STARK_H

#include "Noble.h"
#include <string>
using namespace std;

class Stark{
	private:
		string jefe;
		int lobos;
		string emblema;
		string lema;
		Noble** nobles;
		string guerrero;

	public:
		Stark();
		Stark(string, int, string, string, Noble**, string int);
		string getJefe();
		int getLobos();
		string getEmblema();
		string getLema();
		Noble** getNobles();
		string getGuerrero();
		void setJefe(string);
		void setlobos(int);
		void setEmblema(string);
		void setLema(string);
		void setNobles(Noble**);
		void setGuerrero(string);
};
#endif
