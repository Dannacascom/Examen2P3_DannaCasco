#include "Developer.h"

Developer::Developer(){
}

Developer::Developer(int id, string nombreCompleto, int a�osExperiencia, string puesto){
	this->id = id;
	this->nombreCompleto = nombreCompleto;
	this->a�osExperiencia = a�osExperiencia;
	this->puesto = puesto;
}

Developer::~Developer(){
}

int Developer::getId(){
	return id;
}

void Developer::getId(int id){
	this->id = id;
}

string Developer::getNombreCompleto(){
	return nombreCompleto;
}

void Developer::setNombreCompleto(string nombreCompleto){
	this->nombreCompleto = nombreCompleto;
}

int Developer::getA�osExperiencia(){
	return a�osExperiencia;
}

void Developer::setA�oDeExperiencia(int a�osExperiencia){
	this->a�osExperiencia = a�osExperiencia;
}

string Developer::getPuesto(){
	return puesto;
}

void Developer::setPesto(string puesto){
	this->puesto = puesto;
}
