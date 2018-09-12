// Se conoce de un alumno: cédula, nombre y tres notas parciales (nota1, nota2, nota3). 
// El programa debe imprimir: cédula, nombre, nota final e indique con un mensaje si el alumno 
// aprobó (nota final >= 48) o no aprobó (nota final < 48) la asignatura.

#include <iostream>
using namespace std;

// Definición de la clase
class Alumno{
    private:
        string cedula, nombre;
        float nota1, nota2, nota3, promedio;
    public:
        Alumno();
        void setCedula(string cedula);
        string getCedula();
        void setNombre(string nombre);
        string getNombre();
        void setNota1(float nota1);
        float getNota1();
        void setNota2(float nota2);
        float getNota2();
        void setNota3(float nota3);
        float getNota3();
        float getPromedio();
        string aproRepro();
};