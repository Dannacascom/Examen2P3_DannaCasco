#include "Tarea.h"

Tarea::Tarea(){
}

Tarea::Tarea(int id_de_tarea, string descripcion_de_la_tarea, string estado_de_la_tarea){
	this->id_de_tarea = id_de_tarea;
	this->descripcion_de_la_tarea = descripcion_de_la_tarea;
	this->estado_de_la_tarea = estado_de_la_tarea;
	this->id_de_historia_de_usuario_relacionada = id_de_historia_de_usuario_relacionada;
}

Tarea::~Tarea(){
}

int Tarea::getIdTarea(){
	return id_de_tarea;
}

void Tarea::setIdTarea(int id_de_tarea){
	this->id_de_tarea = id_de_tarea;
}

string Tarea::getDescripcion(){
	return descripcion_de_la_tarea;
}

void Tarea::setDescription(string descripcion_de_la_tarea){
	this->descripcion_de_la_tarea = descripcion_de_la_tarea;
}

string Tarea::getEstado(){
	return estado_de_la_tarea;
}

void Tarea::setEstado(string estado_de_la_tarea){
	this->estado_de_la_tarea = estado_de_la_tarea;
}

int Tarea::getIdHistoria(){
	return id_de_historia_de_usuario_relacionada;
}

void Tarea::setIdHistoria(int id_de_historia_de_usuario_relacionada){
	this->id_de_historia_de_usuario_relacionada = id_de_historia_de_usuario_relacionada;
}
