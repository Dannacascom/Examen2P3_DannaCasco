#include "JuniorDev.h"


JuniorDev::JuniorDev() {
}

JuniorDev::JuniorDev(int id, string nombreCompleto, int añosExperiencia, string puesto, vector<Tarea*> tareas_asignadas) : Developer(id, nombreCompleto, añosExperiencia, puesto) {
	this->tareas_asignadas  = tareas_asignadas;
}

JuniorDev::~JuniorDev() {
}

vector<Tarea*> JuniorDev::getVector(){
	return tareas_asignadas;
}
