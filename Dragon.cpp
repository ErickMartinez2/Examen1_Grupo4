#include "Dragon.h"
#include <string>
using namespace std;

Dragon::Dragon(){

}

Dragon::Dragon(string pNombre, string pColor, int pTamano, int pDistancia, int pAtaque, int pDefensa){
	nombre=pNombre;
	color=pColor;
	tamano=pTamano;
	distancia=pDistancia;
	ataque=pAtaque;
	defensa=pDefensa;
}

string Dragon::getNombre(){
	return nombre;
}

string Dragon::getColor(){
	return color;
}

int Dragon::getTamano(){
	return tamano;
}

int Dragon::getDistancia(){
	return distancia;
}

int Dragon::getAtaque(){
	return ataque;
}

int Dragon::getDefensa(){
	return defensa;
}

void Dragon::setNombre(string pNombre){
	nombre=pNombre;
}

void Dragon::setColor(string pColor){
	color=pColor;
}

void Dragon::setTamano(int pTamano){
	tamano=pTamano;
}

void Dragon::setDistancia(int pDistancia){
	distancia=pDistancia;
}

void Dragon::setAtaque(int pAtaque){
	ataque=pAtaque;
}

void Dragon::setDefensa(int pDefensa){
	defensa=pDefensa;
}
