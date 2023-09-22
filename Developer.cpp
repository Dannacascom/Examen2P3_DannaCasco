#include "Developer.h"

Developer::Developer(){
}

Developer::Developer(int id, string nombreCompleto, int añosExperiencia, string puesto){
	this->id = id;
	this->nombreCompleto = nombreCompleto;
	this->añosExperiencia = añosExperiencia;
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

int Developer::getAñosExperiencia(){
	return añosExperiencia;
}

void Developer::setAñoDeExperiencia(int añosExperiencia){
	this->añosExperiencia = añosExperiencia;
}

string Developer::getPuesto(){
	return puesto;
}

void Developer::setPesto(string puesto){
	this->puesto = puesto;
}
