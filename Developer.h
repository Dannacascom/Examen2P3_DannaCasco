#pragma once
#include <iostream>
using namespace std;

class Developer{
	int id, añosExperiencia;
	string nombreCompleto, puesto;
public:
	Developer();
	Developer(int, string, int, string);
	~Developer();
	int getId();
	void getId(int);
	string getNombreCompleto();
	void setNombreCompleto(string);
	int getAñosExperiencia();
	void setAñoDeExperiencia(int);
	string getPuesto();
	void setPesto(string);

};

