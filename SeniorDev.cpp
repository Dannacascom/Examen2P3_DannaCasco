#include "SeniorDev.h"

SeniorDev::SeniorDev(){
}

SeniorDev::SeniorDev(int id, string nombreCompleto, int a�osExperiencia, string puesto,vector<Historia_de_Usuario*> Historias_de_Usuario) : Developer(id, nombreCompleto, a�osExperiencia, puesto) {
	this->Historias_de_Usuario = Historias_de_Usuario;
}

SeniorDev::~SeniorDev(){
}

vector<Historia_de_Usuario*> SeniorDev::getVectorHistorias(){
	return Historias_de_Usuario;
}
