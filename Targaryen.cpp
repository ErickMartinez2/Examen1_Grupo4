#include "Targaryen.h"
#include "Dragon.h"
#include "Dothraki.h"
#include <string>
using namespace std;

Targaryen::Targaryen(){

}

Targaryen::Targaryen(string pReina, string pEmblema, string pLema){
	reina=pReina;
	emblema=pEmblema;
	lema=pLema;
}

string Targaryen::getReina(){
	return reina;
}

string Targaryen::getEmblema(){
	return emblema;
}

string Targaryen::getLema(){
	return lema;
}

Dothraki** Targaryen::getDothrakis(){
	return dothrakis;
}

Dragon** Targaryen::getDragones(){
	return dragones;
}

void Targaryen::setReina(string pReina){
	reina=pReina;
}

void Targaryen::setEmblema(string pEmblema){
	emblema=pEmblema;
}

void Targaryen::setLema(string pLema){
	lema=pLema;
}

void Targaryen::setDothrakis(Dothraki** pDothrakis){
	dothrakis=pDothrakis;
}

void Targaryen::setDragones(Dragon** pDragones){
	dragones=pDragones;
}
