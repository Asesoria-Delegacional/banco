#include <iostream>
#include "Figura.h"
using namespace std;

int main()
{
    Figura* rectangulo = new Figura();
    float base, altura;

    cout << "Base del rectangulo: ";    cin >> base;
    cout << "Altura del rectangulo: ";    cin >> altura;
    rectangulo->setBase(base);
    rectangulo->setAltura(altura);
    
    system("clear");
    
    cout << "Base: " << rectangulo->getBase() << endl;
    cout << "Altura: " << rectangulo->getAltura() << endl;
    cout << "Perimtro: " << rectangulo->getPerimetro() << endl;
    cout << "Area: " << rectangulo->getArea() << endl;

    delete rectangulo;

    return 0;
}