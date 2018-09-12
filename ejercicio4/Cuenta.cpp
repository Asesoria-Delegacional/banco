/*
        ingresar(double cantidad): se ingresa una cantidad a la cuenta, si la cantidad 
                                   introducida es negativa, no se hará nada.
    
        retirar(double cantidad): se retira una cantidad a la cuenta, si restando la cantidad 
                                  actual a la que nos pasan es negativa, la cantidad de la 
                                  cuenta pasa a ser 0.
*/
#include <iostream>
#include "Cuenta.h"
using namespace std;

Cuenta::Cuenta(string titular){ // Obligatorio
    this->titular = titular;
}
Cuenta::Cuenta(string titular, float cantidad){  // Opcional
    this->titular = titular;
    // Validar la cantidad que se pasa
    if(cantidad >= 0) this->cantidad = cantidad;
}
Cuenta::~Cuenta(){
    // Destructor vacio
}
// Setter y Getter
void Cantidad::setTitular(string titular){
    this->titular = titular;
}
string Cantidad::getTitular(){
    return titular;
}
void setCantidad(float cantidad);
float getCantidad();
void ingresar(float cantidad);
void retirar(float cantidad);