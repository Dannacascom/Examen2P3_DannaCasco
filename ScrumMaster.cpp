#include "ScrumMaster.h"

ScrumMaster::ScrumMaster(){
}

ScrumMaster::ScrumMaster(int id, string nombreCompleto, int a�osExperiencia, string puesto, vector<Proyecto*> proyectos, vector<Sprint*> sprints) : Developer(id,nombreCompleto,a�osExperiencia,puesto){
	this->proyectos = proyectos;
	this->sprints = sprints;
}

ScrumMaster::~ScrumMaster(){
}
