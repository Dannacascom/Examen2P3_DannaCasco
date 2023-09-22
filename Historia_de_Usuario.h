#pragma once
#include <iostream>
using namespace std;

class Historia_de_Usuario{
	int id_historia_de_usuario, tiempo_estimado, id_de_sprint_relacionado;
	string titulo_de_la_historia, prioridad;
public:
	Historia_de_Usuario();
	Historia_de_Usuario(int, string, int, int, int);
	~Historia_de_Usuario();
	int getIdHistoria();
	void setIdHistoria(int);
	string getTitulo();
	void setTitulo(string);
	string getPrioridad();
	void setPrioridad(string);
	int getTiempoEstimado();
	void setTiempoEstimado(int);
	int getIdDeSprint();
	void setIdDeSprint(int);


};

