#pragma once
#include <iostream>
using namespace std;

class Developer{
	int id, a�osExperiencia;
	string nombreCompleto, puesto;
public:
	Developer();
	Developer(int, string, int, string);
	~Developer();
	int getId();
	void getId(int);
	string getNombreCompleto();
	void setNombreCompleto(string);
	int getA�osExperiencia();
	void setA�oDeExperiencia(int);
	string getPuesto();
	void setPesto(string);

};

