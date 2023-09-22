#include "ScrumMaster.h"

ScrumMaster::ScrumMaster(){
}

ScrumMaster::ScrumMaster(int id, string nombreCompleto, int añosExperiencia, string puesto, vector<Proyecto*> proyectos, vector<Sprint*> sprints) : Developer(id,nombreCompleto,añosExperiencia,puesto){
	this->proyectos = proyectos;
	this->sprints = sprints;
}

ScrumMaster::~ScrumMaster(){
}
