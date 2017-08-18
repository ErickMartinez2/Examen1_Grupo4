#include "Stark.h"
#include "Noble.h"
#include <string>
using namespace std;

Stark::Stark(){
	nobles=NULL;
}

Stark::Stark(string pJefe, int pLobos, string pEmblema, string pLema, Noble** pNobles, string pGuerrero){
	jefe=pJefe;
	lobos=pLobos;
	emblema=pEmblema;
	lema=pLema;
	nobles=pNobles;
	guerrero=pGuerrero;
}

Noble** Stark::getNobles(){
	return nobles;
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




