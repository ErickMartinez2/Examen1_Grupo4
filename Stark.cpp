#include "Stark.h"
#include "Noble.h"
#include <string>
using namespace std;

Stark::Stark(){
	nobles=NULL;
}

Stark::Stark(string pJefe, int pLobos, string pEmblema, string pLema, string pGuerrero){
	jefe=pJefe;
	lobos=pLobos;
	emblema=pEmblema;
	lema=pLema;
	guerrero=pGuerrero;
}
string Stark::getJefe(){
	return jefe;
}

int Stark::getLobos(){
	return lobos;
}

string Stark::getEmblema(){
	return emblema;
}

string Stark::getLema(){
	return lema;
}

Noble** Stark::getNobles(){
	return nobles;
}

string Stark::getGuerrero(){
	return guerrero;
}

void Stark::setJefe(string pJefe){
	jefe=pJefe;
}

void Stark::setLobos(int pLobos){
	lobos=pLobos;
}

void Stark::setEmblema(string pEmblema){
	emblema=pEmblema;
}

void Stark::setLema(string pLema){
	lema=pLema;
}

void Stark::setNobles(Noble** pNobles){
	nobles=pNobles;
}

void Stark::setGuerrero(string pGuerrero){
	guerrero=pGuerrero;
}




