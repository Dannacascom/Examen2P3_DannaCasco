#include "Sprint.h"

Sprint::Sprint(){
}

Sprint::Sprint(int id_del_sprint, string nombredeSprint, string fecha_de_inicio, string fecha_de_finalizacion, string estado_del_sprint){
	this->id_de_sprint = id_de_sprint;
	this->fecha_de_incio = fecha_de_inicio;
	this->fecha_de_finalizacion = fecha_de_finalizacion;
	this->estado_del_sprint = estado_del_sprint;
	this->id_de_proyecto_relacionado = id_de_proyecto_relacionado;
	this->nombredeSprint = nombredeSprint;
}

Sprint::~Sprint(){
}

int Sprint::getIdSprint(){
	return id_de_sprint;
}

void Sprint::setIdSprint(int id_de_sprint){
	this->id_de_sprint = id_de_sprint;
}

string Sprint::getNameSprint(){
	return nombredeSprint;
}

void Sprint::setNameSprint(string nombredeSprint){
	this->nombredeSprint = nombredeSprint;
}

string Sprint::getFechaInicio(){
	return fecha_de_incio;
}

void Sprint::setFechaInicio(string fecha_de_incio){
	this->fecha_de_incio = fecha_de_incio;
}

string Sprint::getFechaFinalizacion(){
	return fecha_de_finalizacion;
}

void Sprint::setFechaFinalizacion(string fecha_de_incio){
	this->fecha_de_incio = fecha_de_incio;
}

string Sprint::getEstado(){
	return estado_del_sprint;
}

void Sprint::setEstado(string estado_del_sprint){
	this->estado_del_sprint = estado_del_sprint;
}

int Sprint::getIdRelacionado(){
	return id_de_proyecto_relacionado;
}

void Sprint::setIdRelacionado(int id_de_proyecto_relacionado){
	this->id_de_proyecto_relacionado = id_de_proyecto_relacionado;
}
