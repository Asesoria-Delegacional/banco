#include <iostream>
#include "Fecha.h"
using namespace std;

Fecha::Fecha(){

}
Fecha::~Fecha(){

}
// Nacimiento
void Fecha::setDiaNac(int diaNac){
    this->diaNac = diaNac;
}
void Fecha::setMesNac(int mesNac){
    this->mesNac = mesNac;
}
void Fecha::setAnoNac(int anoNac){
    this->anoNac = anoNac;
}

int Fecha::getDiaNac(){
    return diaNac;
}
int Fecha::getMesNac(){
    return mesNac;
}
int Fecha::getAnoNac(){
    return anoNac;
}

// Fecha Actual 

void Fecha::setDiaAct(int diaAct){
    this->diaAct = diaAct;
}
void Fecha::setMesAct(int mesAct){
    this->mesAct = mesAct;
}
void Fecha::setAnoAct(int anoAct){
    this->anoAct = anoAct;
}

int Fecha::getDiaAct(){
    return diaAct;
}
int Fecha::getMesAct(){
    return mesAct;
}
int Fecha::getAnoAct(){
    return anoAct;
}

int Fecha::getEdad(){
    edad = getAnoAct() - getAnoNac();
    return (((getMesAct() - getMesNac()) <= 0) && ((getDiaAct() - getDiaNac()) < 0)) ? edad -= 1 : edad;
}
void Fecha::setNombre(string nombre){
    this->nombre = nombre;
}
string Fecha::getNombre(){
    return nombre;
}