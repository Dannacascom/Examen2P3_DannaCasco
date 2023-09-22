#pragma once
#include <iostream>
using namespace std;

class Historia_de_Usuario{
	int id_historia_de_usuadio, prioridad, tiempo_estimado, id_de_sprint_relacionado;
	string titulo_de_la_historia;
public:
	Historia_de_Usuario();
	Historia_de_Usuario(int, string, int, int, int);
	~Historia_de_Usuario();
	int getIdHistoria();
	void setIdHistoria(int);
	string getTitulo();
	void setTitulo(string);
	int getPrioridad();
	void setPrioridad(int);
	int getTiempoEstimado();
	void setTiempoEstimado(int);
	int getIdDeSprint();
	void setIdDeSprint(int);


};

