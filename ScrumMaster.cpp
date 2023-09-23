#include "ScrumMaster.h"

ScrumMaster::ScrumMaster(){
}

ScrumMaster::ScrumMaster(int id, string nombreCompleto, int a�osExperiencia, string puesto, vector<int*> proyectos, vector<int*> sprints) : Developer(id,nombreCompleto,a�osExperiencia,puesto){
	this->proyectos = proyectos;
	this->sprints = sprints;
}

ScrumMaster::~ScrumMaster(){
}

vector<int*> ScrumMaster::getVcetorProyectos(){
	return proyectos;
}

vector<int*> ScrumMaster::getVectorSprints(){
	return sprints;
}
