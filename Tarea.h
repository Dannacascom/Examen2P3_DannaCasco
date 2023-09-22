#pragma once
#include <iostream>
using namespace std;

class Tarea{
	int id_de_tarea, id_de_historia_de_usuario_relacionada;
	string descripcion_de_la_tarea, estado_de_la_tarea;
public :
	Tarea();
	Tarea(int, string, string, int);
	~Tarea();
	int getIdTarea();
	void setIdTarea(int);
	string getDescripcion();
	void setDescription(string);
	string getEstado();
	void setEstado(string);
	int getIdHistoria();
	void setIdHistoria(int);
};

