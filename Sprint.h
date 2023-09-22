#pragma once
#include <iostream>
using namespace std;

class Sprint{
	int id_de_proyecto_relacionado, id_de_sprint;
	string fecha_de_incio, fecha_de_finalizacion, estado_del_sprint;
	string nombre_del_sprint;

public: 
	Sprint();
	Sprint(int, string, string, string, string, int);
	~Sprint();
	int getIdSprint();
	void setIdSprint(int);
	string getnombre_del_sprint();
	void nombre_del_sprint(string);
	string getFechaInicio();
	void setFechaInicio(string);
	string getFechaFinalizacion();
	void setFechaFinalizacion(string);
	string getEstado();
	void setEstado(string);
	int getIdRelacionado();
	void setIdRelacionado(int);
};

