#include "Lannister.h"
#include "Guardia.h"
#include <string>
using namespace std;

Lannister::Lannister(){
	
}

Lannister::Lannister(string pJefe, string pEmblema, string pLema, int pDinero, string pMontana){
	jefe=pJefe;
	emblema=pEmblema;
	lema=pLema;
	dinero=pDinero;
	montana=pMontana;
}

string Lannister::getJefe(){
	return jefe;
}

string Lannister::getEmblema(){
	return emblema;
}

string Lannister::getLema(){
	return lema;
}

Guardia** Lannister::getGuardias(){
	return guardias;
}

int Lannister::getDinero(){
	return dinero;
}

string Lannister::getMontana(){
	return montana;
}

void Lannister::setJefe(string pJefe){
	jefe=pJefe;
}

void Lannister::setEmblema(string pEmblema){
	emblema=pEmblema;
}

void Lannister::setLema(string pLema){
	lema=pLema;
}

void Lannister::setGuardias(Guardia** pGuardias){
	guardias=pGuardias;
}

void Lannister::setDinero(int pDinero){
	dinero=pDinero;
}

void Lannister::setMontana(string pMontana){
	montana=pMontana;
}













