#pragma once
#include "Tarea.h"
#include "Developer.h"
#include <vector>
#include <iostream>
using namespace std;


class JuniorDev : public Developer{
	vector<Tarea*> tareas_asignadas;
public:
	JuniorDev();
	JuniorDev(int, string, int, string, vector<Tarea*> tareas_asignadas);
	~JuniorDev();
	vector<Tarea*> getVector();
};

