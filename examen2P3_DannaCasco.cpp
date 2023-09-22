

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Developer.h"
using namespace std;
vector<Developer*> developers;

void llenarDevelopers() {
	ifstream file;
	string line;
	file.open("developers.txt");
	int id, añosExperiencia;
	string nombreCompleto, puesto;
	while (!file.eof()) {
		getline(file, line);
		for (int i = 0; i < line.length() ; i++){
			if (i == 0);
			if (line[',']) {

			}

		}
	}

}

void leerArchivos() {
	
}


void menu() {
	int opcion;
	do {
		cout << "---MENU PRINCIPAL---" << endl;
		cout << "1.Leer archivos\n 2.Guardar archivos\n3.Asignaciones\n4.SALIR\nselecciones una opción: ";
		cin >> opcion;

		if (opcion == 1) leerArchivos();
		if(opcion==2)
		if(opcion==3)
	

	} while (opcion != 4);


}

int main(){


}

