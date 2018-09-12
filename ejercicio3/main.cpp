#include <iostream>
#include "Fecha.h"
using namespace std;

int main()
{
    Fecha* miEdad = new Fecha();
    string nombre;
    int diaNac, diaAct, mesNac, mesAct, anoNac, anoAct;

    cout << "Nombre: ";     getline(cin, nombre);
    cout << "\n\t----- Fecha de Nacimiento ---\n" << endl;
    cout << "Dia de nacimiento: ";  cin >> diaNac;
    cout << "Mes de nacimiento: ";  cin >> mesNac;
    cout << "Anio de nacimiento: ";  cin >> anoNac;

    cout << "\n\t----- Fecha actual ---\n" << endl;
    cout << "Dia Actual: ";  cin >> diaAct;
    cout << "Mes Actual: ";  cin >> mesAct;
    cout << "Anio Actual: ";  cin >> anoAct;

    // Paso de valores a objetos
    miEdad->setNombre(nombre);

    miEdad->setDiaNac(diaNac);
    miEdad->setMesNac(mesNac);
    miEdad->setAnoNac(anoNac);

    miEdad->setDiaAct(diaAct);
    miEdad->setMesAct(mesAct);
    miEdad->setAnoAct(anoAct);

    // system("clear");
    cout << "Fecha de nacimiento: " << miEdad->getDiaNac() << "/"<<miEdad->getMesNac()<<"/"<<miEdad->getAnoNac() << endl;
    cout << "Fecha actual: " << miEdad->getDiaAct() << "/"<<miEdad->getMesAct()<<"/"<<miEdad->getAnoAct() << endl;
    cout << miEdad->getNombre() << " tienes " << miEdad->getEdad() << " anio de edad" << endl;
    // cout << "\t\nFecha de nacimiento:\n" << endl;
    // cout << "Dia: " << miEdad->getDiaNac() << endl;
    // cout << "Mes: " << miEdad->getMesNac() << endl;
    // cout << "Anio: " << miEdad->getAnoNac() << endl;
    return 0;
}