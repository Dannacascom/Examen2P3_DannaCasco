#include "Proyecto.h"

Proyecto::Proyecto(){
}

Proyecto::Proyecto(int id_de_proyecto, string nombre_del_proyecto, string fecha_de_inicio, string fecha_de_finalizacion, string estado_del_proyecto, vector<string*> esquipo_de_desarollo){
    this->nombre_del_proyecto = nombre_del_proyecto;
    this->fecha_de_inicio = fecha_de_inicio;
    this->fecha_de_finalizacion = fecha_de_finalizacion;
    this->estado_del_proyecto = estado_del_proyecto;
    this->esquipo_de_desarollo = esquipo_de_desarollo;
    
}

Proyecto::~Proyecto(){
}

int Proyecto::getIdProyecto(){
    return id_de_proyecto;
}

void Proyecto::setIdProyecto(int id_de_proyecto){
    this->id_de_proyecto = id_de_proyecto;
}

string Proyecto::getNombre(){
    return nombre_del_proyecto;
}

void Proyecto::setNombre(string nombre_del_proyecto){
    this->nombre_del_proyecto = nombre_del_proyecto;
}

string Proyecto::getfechaInicio(){
    return fecha_de_inicio;
}

void Proyecto::setFechaInicio(string fecha_de_inicio){
    this->fecha_de_inicio = fecha_de_inicio;
}

string Proyecto::getEstado(){
    return estado_del_proyecto;
}

void Proyecto::setEstado(string estado_del_proyecto){
    this->estado_del_proyecto = estado_del_proyecto;
}

void Proyecto::listarVector(){
    for (string* equipo : esquipo_de_desarollo) {
        cout << equipo;
    }
}




