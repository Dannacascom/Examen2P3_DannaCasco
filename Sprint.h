#pragma once
#include <iostream>
using namespace std;

class Sprint{
	int id_de_proyecto_relacionado, id_de_sprint;
	string nombredeSprint,fecha_de_incio, fecha_de_finalizacion, estado_del_sprint;

public: 
	Sprint();
	Sprint(int, string, string, string, string);
	~Sprint();
	int getIdSprint();
	void setIdSprint(int);
	string getNameSprint();
	void setNameSprint(string);
	string getFechaInicio();
	void setFechaInicio(string);
	string getFechaFinalizacion();
	void setFechaFinalizacion(string);
	string getEstado();
	void setEstado(string);
	int getIdRelacionado();
	void setIdRelacionado(int);
};

