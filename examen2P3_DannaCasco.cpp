

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Developer.h"
#include "ScrumMaster.h"
#include "JuniorDev.h"
#include "Historia_de_Usuario.h"
#include "Tarea.h"
#include "Proyecto.h"
using namespace std;
vector<Developer*> developers;
vector<Proyecto*> proyectos;
vector<Historia_de_Usuario*> historias;
vector<Tarea*> tareas;
vector<Sprint*> sprints;

void submenu() {
    int opcion;

    do {
        cout << "--Submenu asignaciones--" << endl;
        cout << "1.asignar proyecto a scrum Master\n2.listar y asignar sprint a proyecto y a scrum master\n3.listar y asignar historia a sprint,proyecto y senior dev\4.listar y asignar tarea a historia de usuario ,sprint, y junior dev\n5.regresar al menu principal\nseleccione una opcion: ";

    }while(opcion != 5);
   
	
}

void Asignarproyectoascrummaster() {
    cout << "--ASIGNAR PROYECTO A scrummaster--" << endl;
    int con = 1, id =0 , id2;


    cout << "--PROYECTOS--" << endl;
    for (Proyecto* p : proyectos) {
        cout << "ID: " << con << "Nombre: " << p->getNombre() << endl;
        con++;
    }

    int con2 = 1;
    cout << "--DEVELOPERS--" << endl;
    for (Developer* d : developers) {
        cout << "ID: " << con2 << "NOMBRE: " << d->getNombreCompleto() << endl;
        con2++;
    }

    cout << "Ingrese Id de proyecto: ";
    cin >> id;

    cout << "Ingrese Id de scrummaster: ";
    cin >> id2;
}

void AsignarsprintaunproyectoyaScrumMaster() {
    cout << "--PROYECTOS--" << endl;
    int con = 1,id,id2;
    for (Proyecto* p : proyectos) {
        cout << "ID: " << con << "Nombre: " << p->getNombre() << endl;
        con++;
    }

    int con2 = 1;
    cout << "--SPRINTS--" << endl;
    for (Sprint* s : sprints) {
        cout << "ID: " << con2 << "NOMBRE: " << s->getNameSprint() << endl;
        con2++;
    }

    cout << "Ingrese Id de proyecto: ";
    cin >> id;

    cout << "Ingrese Id de scrummaster: ";
    cin >> id2;
}

void Asignarhistoriadeusuarioaunsprintyaunseniorddev() {
    cout << "--PROYECTOS--" << endl;
    int con = 1, id, id2;
    for (Proyecto* p : proyectos) {
        cout << "ID: " << con << "Nombre: " << p->getNombre() << endl;
        con++;
    }

    int con2 = 1;
    cout << "--SPRINTS--" << endl;
    for (Sprint* s : sprints) {
        cout << "ID: " << con2 << "NOMBRE: " << s->getNameSprint() << endl;
        con2++;
    }

    cout << "--HISTORIAS--" << endl;
    for (Historia_de_Usuario* s : historias) {
        cout << "ID: " << con2 << "NOMBRE: " << s->getTitulo() << endl;
        con2++;
    }

}

void llenarDevelopers() {
    //abre archivo en modo lectura
    ifstream archivo;
    archivo.open("developers.txt");
    string linea;

    getline(archivo, linea);

    //comienza la lectura del archivo
    while (getline(archivo, linea)) {
        int id = 0, añosExperiencia = 0 , cont = 0;
        string nombreCompleto, puesto,temp;//variable temporal para almacenar los atributos

        //recorre la linea 
        for (char l : linea) {
            if (l == ',') {
                //se va asigando la variable temporal segun por el dato en el que se esta iterando
                switch (cont) {
                case 0:
                    id = stoi(temp);
                    break;
                case 1:
                    nombreCompleto = temp;
                    break;
                case 2:
                    añosExperiencia = stoi(temp);
                    break;
                case 3:
                    puesto = temp;
                    break;
                }
                temp = "";
                cont++;
            }
            else {
                temp += l;
            }
        }

        if (temp != "") {
            switch (cont) {
            case 0:
                id = stoi(temp);
                break;
            case 1:
                nombreCompleto = temp;
                break;
            case 2:
                añosExperiencia = stoi(temp);
                break;
            case 3:
                puesto = temp;
                break;
            }
        }
        developers.push_back(new Developer(id, nombreCompleto, añosExperiencia, puesto));
        cout << id << endl;
    }

    archivo.close();
}
void llenarProyectos() {
    ifstream archivo;
    archivo.open("proyecto.txt");
    string linea;
    getline(archivo, linea);

    while (getline(archivo, linea)) {
        int idProyecto = 0, cont = 0;
        string nombreProyecto, fechaInicio, fechaFinalizacion, estadoProyecto , temp;

        for (char c : linea) {
            if (c == ',') {
                switch (cont) {
                case 0:
                    idProyecto = stoi(temp);
                    break;
                case 1:
                    nombreProyecto = temp;
                    break;
                case 2:
                    fechaInicio = temp;
                    break;
                case 3:
                    fechaFinalizacion = temp;
                    break;
                case 4:
                    estadoProyecto = temp;
                    break;
                }
                temp = "";
                cont++;
            }
            else {
                cont += c;
            }
        }

        switch (cont) {
        case 0:
            idProyecto = stoi(temp);
            break;
        case 1:
            nombreProyecto = temp;
            break;
        case 2:
            fechaInicio = temp;
            break;
        case 3:
            fechaFinalizacion = temp;
            break;
        case 4:
            estadoProyecto = temp;
            break;
        }
        proyectos.push_back(new Proyecto(idProyecto, nombreProyecto, fechaInicio, fechaFinalizacion, estadoProyecto));
    }

    archivo.close();

}
void llenarHistorias() {
    //abre archivo en modo lectura
    ifstream archivo;
    archivo.open("historias_usuario.txt");
    string linea;
    getline(archivo, linea);

    //comienza la lectura del archivo
    while (getline(archivo, linea)) {
        int idHistoria =0, tiempoEstimado=0, cont = 0;
        string titulo, prioridad, temp;

        for (char c : linea) {
            if (c == ',') {
                switch (cont) {
                case 0:
                    idHistoria = stoi(temp);
                    break;
                case 1:
                    titulo = temp;
                    break;
                case 2:
                    prioridad = temp;
                    break;
                case 3:
                    tiempoEstimado = stoi(temp);
                    break;
                }
                temp = "";
                cont++;
            }
            else {
                temp += c;
            }
        }
        switch (cont) {
        case 0:
            idHistoria = stoi(temp);
            break;
        case 1:
            titulo = temp;
            break;
        case 2:
            prioridad = temp;
            break;
        case 3:
            tiempoEstimado =stoi(temp);
            break;
        }
        //creando obejeto y agregando al vector

        historias.push_back(new Historia_de_Usuario(idHistoria, titulo, prioridad, tiempoEstimado));
    }

    archivo.close();
}
void llenarTareas() {
    ifstream archivo;
    archivo.open("tarea.txt");

    string linea;
    getline(archivo, linea);


    while (getline(archivo, linea)) {
        int idTarea, cont = 0;
        string descripcionTarea , estadoTarea , temp;
        string ;

        //recorre la linea del archivo
        for (char c : linea) {
            if (c == ',') {
                switch (cont) {
                case 0:
                    idTarea = stoi(temp);
                    break;
                case 1:
                    descripcionTarea = temp;
                    break;
                case 2:
                    estadoTarea = temp;
                    break;
                }
                temp = "";
                cont++;
            }
            else {
                temp += c;
            }
        }
        switch (cont) {
        case 0:
            idTarea = stoi(temp);
            break;
        case 1:
            descripcionTarea = temp;
            break;
        case 2:
            estadoTarea = temp;
            break;
        }

        tareas.push_back(new Tarea(idTarea, descripcionTarea, estadoTarea));
    }

    archivo.close();
}
void llenarSprints(){
    ifstream archivo("sprint.txt");

    string linea;
    getline(archivo, linea);

    while (getline(archivo, linea)) {
        int idSprint, cont = 0;
        string nombreSprint, fechaInicio, fechaFinalizacion, estadoSprint, temp;
      
        for (char c : linea) {
            if (c == ',') {
                switch (cont) {
                case 0:
                    idSprint = stoi(temp);
                    break;
                case 1:
                    nombreSprint = temp;
                    break;
                case 2:
                    fechaInicio = temp;
                    break;
                case 3:
                    fechaFinalizacion = temp;
                    break;
                case 4:
                    estadoSprint = temp;
                    break;
                }
                temp = "";
                cont++;
            }
            else {
                temp += c;
            }
        }
        switch (cont) {
        case 0:
            idSprint = stoi(temp);
            break;
        case 1:
            nombreSprint = temp;
            break;
        case 2:
            fechaInicio = temp;
            break;
        case 3:
            fechaFinalizacion = temp;
            break;
        case 4:
            estadoSprint = temp;
            break;
        }

        sprints.push_back(new Sprint(idSprint, nombreSprint, fechaInicio, fechaFinalizacion, estadoSprint));
    }

    archivo.close();
}

void leerArchivos() {
	llenarDevelopers();
    llenarProyectos();
    llenarHistorias();
    llenarTareas();
    llenarSprints();
}

void guardarArchivos() {
    ofstream develpers,historiass,proyectoss,sprintss,tareass;
    develpers.open("developersNuevo.txt");

    for (Developer* d : developers) {
        develpers << "id,nombreCompleto,añosExperiencia,Puesto\n";
        develpers << d->getId() << "," << d->getNombreCompleto() << "," << d->getAñosExperiencia() << "," << d->getPuesto() << "\n";
    }

    for (Historia_de_Usuario* h : historias){
      historiass <<  "ID_de_Historia, Título_de_la_Historia, Prioridad, Tiempo_Estimado\n";
      historias << h->getIdHistoria() << "," << h->getTitulo() << "," << h->getPrioridad() << "," << h->getTiempoEstimado() << "\n";
    }

    for (Proyecto* p : proyectos) {
        proyectoss << "ID_de_Proyecto,Nombre_del_Proyecto,Fecha_de_Inicio\n";
        proyectoss << p->getIdProyecto() << "," << p->getNombre() << "," << p->getfechaInicio() << "\n";
    }

    for (Sprint* s : sprints) {
        sprintss << "ID_de_Sprint,Nombre_del_Sprint,Fecha_de_Inicio,Fecha_de_Finalización,Estado_del_Sprint\n";
        sprintss << s->getIdSprint() << "," << s->getNameSprint() << "," << s->getFechaInicio() << "," << s->getFechaFinalizacion() << "," << s->getEstado() << "\n";
    }
}


void menu() {
	int opcion;
	do {
		cout << "---MENU PRINCIPAL---" << endl;
		cout << "1.Leer archivos\n2.Guardar archivos\n3.Asignaciones\n4.SALIR\nselecciones una opción: ";
		cin >> opcion;
        if (opcion == 1) leerArchivos();
		if (opcion == 2)guardarArchivos();
		if (opcion == 3)submenu();
	} while (opcion != 4);

    for (Developer* d : developers) {
        delete d;
    }

    for (Proyecto* p : proyectos) {
        delete p;
    }

    for (Historia_de_Usuario* h : historias) {
        delete h;
    }
    for (Tarea* t : tareas) {
        delete t;
    }

    for (Sprint* s : sprints) {
        delete s;
    }

}


int main(){
    menu();
}

