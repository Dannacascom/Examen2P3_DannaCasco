#pragma once
#include <iostream>
#include "Historia_de_Usuario.h"
#include "Developer.h"
#include <vector>

using namespace std;

class SeniorDev : Developer{
	vector<Historia_de_Usuario*> Historias_de_Usuario;
public:
	SeniorDev();
	SeniorDev(int ,string,int,string,vector<Historia_de_Usuario*>);
	~SeniorDev();
	vector<Historia_de_Usuario*> getVectorHistorias();
};

