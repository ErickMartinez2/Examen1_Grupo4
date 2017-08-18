#include "Dothraki.h"
#include <string>
using namespace std;

Dothraki::Dothraki(){

}

Dothraki::Dothraki(string pNombre, string pJefe, string pCaballo, string pColor, int pAtaque, int pDefensa){
	nombre=pNombre;
	jefe=pJefe;
	caballo=pCaballo;
	color=pColor;
	ataque=pAtaque;
	defensa=pDefensa;
}

string Dothraki::getNombre(){
	return nombre;
}

string Dothraki::getJefe(){
	return jefe;
}

string Dothraki::getCaballo(){
	return caballo;
}

string Dothraki::getColor(){
	return color;
}

int Dothraki::getAtaque(){
	return ataque;
}

int Dothraki::getDefensa(){
	return defensa;
}

void Dothraki::setNombre(string pNombre){
	nombre=pNombre;
}

void Dothraki::setJefe(string pJefe){
	jefe=pJefe;
}

void Dothraki::setCaballo(string pCaballo){
	caballo=pCaballo;
}

void Dothraki::setColor(string pColor){
	color=pColor;
}

void Dothraki::setAtaque(int pAtaque){
	ataque=pAtaque;
}

void Dothraki::setDefensa(int pDefensa){
	defensa=pDefensa;
}

