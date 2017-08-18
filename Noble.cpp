#include "Noble.h"
#include <string>
using namespace std;

Noble::Noble(){

}

Noble::Noble(string pNombre, string pEscudo, string pLema, int pAtaque, int pDefensa){
	nombre=pNombre;
	escudo=pEscudo;
	lema=pLema;
	ataque=pAtaque;
	defensa=pDefensa;
}

string Noble::getNombre(){
	return nombre;
}

int Noble::getAtaque(){
	return ataque;
}

int Noble::getDefensa(){
	return defensa;
}

void Noble::setNombre(string pNombre){
	nombre=pNombre;
}

void Noble::setEscudo(string pEscudo){
	escudo=pEscudo;
}

void Noble::setLema(string pLema){
	lema=pLema;
}

void Noble::setAtaque(int pAtaque){
	ataque=pAtaque;
}

void Noble::setDefensa(int pDefensa){
	defensa=pDefensa;
}









