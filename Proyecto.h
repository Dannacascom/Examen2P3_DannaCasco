#pragma once
#include <iostream>
#include <vector>

using namespace std;
class Proyecto{
	int id_de_proyecto;
	string nombre_del_proyecto,fecha_de_inicio,fecha_de_finalizacion,estado_del_proyecto;
	vector<string*>esquipo_de_desarollo;
public:
	Proyecto();
	Proyecto(int,string, string, string, string);
	~Proyecto();
	int getIdProyecto();
	void setIdProyecto(int);
	string getNombre();
	void setNombre(string);
	string getfechaInicio();
	void setFechaInicio(string);
	string getEstado();
	void setEstado(string);
	void listarVector();
};

