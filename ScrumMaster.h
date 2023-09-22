#pragma once
#include "Proyecto.h"
#include "Sprint.h"
#include "Developer.h"
#include <iostream>
using namespace std;

class ScrumMaster : public Developer{
	vector<Proyecto*> proyectos;
	vector<Sprint*> sprints;
public:
	ScrumMaster();
	ScrumMaster(int ,string,int, string,vector<Proyecto*>, vector<Sprint*>);
	~ScrumMaster();
	vector<Proyecto*> getVcetorProyectos();
	vector<Sprint*> getVectorSprints();

};

