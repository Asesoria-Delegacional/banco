/*
    Se conoce de una persona el nombre, el día, mes y año de nacimiento, escriba un programa 
    que lea la fecha de hoy, como día, mes y año e imprima el nombre de la persona y su edad.
*/
#include <iostream>
using namespace std;

// Declaración de la clase: Conjunto de objetos con propiedades y comportamientos en común
class Fecha{
    private:
        string nombre;
        int diaNac, mesNac, anoNac;
        int diaAct, mesAct, anoAct;
        int edad;
    public:
        Fecha();
        ~Fecha();
        void setNombre(string nombre);
        string getNombre();

        void setDiaNac(int diaNac);
        int getDiaNac();
        void setMesNac(int mesNac);
        int getMesNac();
        void setAnoNac(int anoNac);
        int getAnoNac();

        void setDiaAct(int diaAct);
        int getDiaAct();
        void setMesAct(int mesAct);
        int getMesAct();
        void setAnoAct(int anoAct);
        int getAnoAct();

        int getEdad();
        
};