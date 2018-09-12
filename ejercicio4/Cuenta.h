/*
    1) Crea una clase llamada Cuenta que tendrá los siguientes atributos: 
       titular y cantidad (puede tener decimales).

    * El titular será obligatorio y la cantidad es opcional. 
      Crea dos constructores que cumpla lo anterior.

    * Crea sus métodos get, set y toString.

    * Tendrá dos métodos especiales:
        ingresar(double cantidad): se ingresa una cantidad a la cuenta, si la cantidad 
                                   introducida es negativa, no se hará nada.
    
        retirar(double cantidad): se retira una cantidad a la cuenta, si restando la cantidad 
                                  actual a la que nos pasan es negativa, la cantidad de la 
                                  cuenta pasa a ser 0.
*/
#include <iostream>
using namespace std;

class Cuenta{
    private:
        string titular;
        float cantidad;
    public:
        Cuenta(string titular); // Obligatorio
        Cuenta(string titular, float cantidad);  // Opcional
        ~Cuenta();
        // Setter y Getter
        void setTitular(string titular);
        string getTitular();
        void setCantidad(float cantidad);
        float getCantidad();
        void ingresar(float cantidad);
        void retirar(float cantidad);
};