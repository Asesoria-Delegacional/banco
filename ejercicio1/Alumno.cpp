#include <iostream>
#include "Alumno.h"
using namespace std;

Alumno::Alumno(){
    // Constructor vacio
}
void Alumno::setCedula(string cedula){
    this->cedula = cedula;
}
string Alumno::getCedula(){
    return cedula;
}
void Alumno::setNombre(string nombre){
    this->nombre = nombre;
}
string Alumno::getNombre(){
    return nombre;
}
void Alumno::setNota1(float nota1){
    this->nota1 = nota1;
}
float Alumno::getNota1(){
    return nota1;
}
void Alumno::setNota2(float nota2){
    this->nota2 = nota2;
}
float Alumno::getNota2(){
    return nota2;
}
void Alumno::setNota3(float nota3){
    this->nota3 = nota3;
}
float Alumno::getNota3(){
    return nota3;
}
float Alumno::getPromedio(){
    promedio = (nota1 + nota2 + nota3)/3;
    return promedio;
}
// aprobó (nota final >= 7) o no aprobó (nota final < 48) la asignatura.
string Alumno::aproRepro(){
    return (getPromedio() >= 7) ? "Aprobo": "Reprobo";
}