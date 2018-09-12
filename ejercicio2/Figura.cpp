#include <iostream>
#include "Figura.h"
using namespace std;

Figura::Figura(){}  // Constructor
Figura::~Figura(){}         // Destructor
void Figura::setBase(float base){
    this->base = base;
}
float Figura::getBase(){
    return base;
}
void Figura::setAltura(float altura){
    this->altura = altura;
}
float Figura::getAltura(){
    return altura;
}

// perímetro (2*base + 2*altura)
float Figura::getPerimetro(){
    perimetro = (2 * getBase()) + (2 * getAltura());
    // perimetro = (2 * base) + (2 + altura);
    return perimetro;
}
// alcule su área (base * altura)
float Figura::getArea(){
    area = getBase() * getAltura();
    return area;
}

 
    