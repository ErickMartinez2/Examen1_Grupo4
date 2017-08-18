#include "Guardia.h"
#include <string>
using namespace std;

Guardia::Guardia(){

}

Guardia::Guardia(string pNombre, int pEdad, string pSoldado, int pAtaque, int pDefensa){
	nombre=pNombre;
	edad=pEdad;
	soldado=pSoldado;
	ataque=pAtaque;
	defensa=pDefensa;
}

string Guardia::getNombre(){
	return nombre;
}

int Guardia::getEdad(){
	return edad;
}

string Guardia::getSoldado(){
	return soldado;
}

int Guardia::getAtaque(){
	return ataque;
}

int Guardia::getDefensa(){
	return defensa;
}

void Guardia::setNombre(string pNombre){
	nombre=pNombre;
}

void Guardia::setEdad(int pEdad){
	edad=pEdad;
}

void Guardia::setSoldado(string pSoldado){
	soldado=pSoldado;
}

void Guardia::setAtaque(int pAtaque){
	ataque=pAtaque;
}

void Guardia::setDefensa(int pDefensa){
	defensa=pDefensa;
}
