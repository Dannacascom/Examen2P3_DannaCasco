#include "Historia_de_Usuario.h"

Historia_de_Usuario::Historia_de_Usuario(){
}

Historia_de_Usuario::Historia_de_Usuario(int id_historia_de_usuario, string titulo_de_la_historia, int prioridad, int tiempo_estimado) {
    this->id_historia_de_usuario = id_historia_de_usuario;
    this->titulo_de_la_historia = titulo_de_la_historia;
    this->prioridad = prioridad;
    this->tiempo_estimado = tiempo_estimado;
}

Historia_de_Usuario::~Historia_de_Usuario(){
}

int Historia_de_Usuario::getIdHistoria(){
    return id_historia_de_usuario;
}

void Historia_de_Usuario::setIdHistoria(int id_de_sprint_relacionado){
    this->id_de_sprint_relacionado = id_de_sprint_relacionado;
}

string Historia_de_Usuario::getTitulo(){
    return titulo_de_la_historia;
}

void Historia_de_Usuario::setTitulo(string titulo_de_la_historia){
    this->titulo_de_la_historia = titulo_de_la_historia;
}

string Historia_de_Usuario::getPrioridad(){
    return prioridad;
}

void Historia_de_Usuario::setPrioridad(string prioridad){
    this->prioridad = prioridad;
        
}

int Historia_de_Usuario::getTiempoEstimado(){
    return tiempo_estimado;
}

void Historia_de_Usuario::setTiempoEstimado(int tiempo_estimado){
    this->tiempo_estimado = tiempo_estimado;
}

int Historia_de_Usuario::getIdDeSprint(){
    return id_de_sprint_relacionado;
}

void Historia_de_Usuario::setIdDeSprint(int id_de_sprint_relacionado){
    this->id_de_sprint_relacionado = id_de_sprint_relacionado;
}
