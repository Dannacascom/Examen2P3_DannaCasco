#pragma once
#include "Proyecto.h"
#include "Sprint.h"
#include "Developer.h"
#include <iostream>
using namespace std;

class ScrumMaster : public Developer{
	vector<string*> proyectos;
	vector<string*> sprints;
public:
	ScrumMaster();
	ScrumMaster(int ,string,int, string,vector<int*>, vector<int*>);
	~ScrumMaster();
	vector<string*> getVcetorProyectos();
	vector<string*> getVectorSprints();

};

