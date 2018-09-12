#include <iostream>
#include "Alumno.h"
using namespace std;

int main()
{
    // instanciando un objeto
    Alumno* alumnos;
    int nAlumnos;
    string cedula, nombre;
    float nota1, nota2, nota3;

    cout << "Numero de alumno: ";   cin >> nAlumnos;
    alumnos = new Alumno[nAlumnos];
    
    for(int i = 0; i < nAlumnos; i++){
        cin.ignore();
        system("clear");
        // Encabezado
        cout << "\n\t ----- Registro de alumnos ----\n" << endl;
        cout << "\tAlta de alumno " << i+1 << " de " << nAlumnos << ":\n" << endl;

        // Datos
        cout << "Cedula: ";    getline(cin, cedula);
        cout << "Nombre: ";    getline(cin, nombre);
        cout << "Nota 1: ";    cin >> nota1;
        cout << "Nota 2: ";    cin >> nota2;
        cout << "Nota 3: ";    cin >> nota3;

        // Asignamos a los objetos
        (alumnos+i)->setCedula(cedula);
        (alumnos+i)->setNombre(nombre);
        (alumnos+i)->setNota1(nota1);
        (alumnos+i)->setNota2(nota2);
        (alumnos+i)->setNota3(nota3);
    }
    system("clear");
    // Mostramos los datos del alumno asi como su estatus
    for(int i = 0; i < nAlumnos; i++){
        cout << "\n\t ---------- Alumno " << i+1 << " ----------" << endl;
        cout << "Cedula: " << (alumnos+i)->getCedula() << endl;
        cout << "Nombre: " << (alumnos+i)->getNombre() << endl;
        cout << "Nota 1: " << (alumnos+i)->getNota1() << endl;
        cout << "Nota 2: " << (alumnos+i)->getNota2() << endl;
        cout << "Nota 3: " << (alumnos+i)->getNota3() << endl;
        cout << "Promedio Final: " << (alumnos+i)->getPromedio() << endl;
        cout << "Estatus: " << (alumnos+i)->aproRepro() << endl;
    }
    return 0;
}