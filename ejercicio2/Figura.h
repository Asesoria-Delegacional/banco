/*
    Dado la altura y la base de un rectángulo, calcule su área (base * altura) y 
    perímetro (2*base + 2*altura)
*/
#include <iostream>
using namespace std;

class Figura{
    private:
        float base, altura, perimetro, area;
    public:
        Figura();  // Constructor
        ~Figura(); // Destructor
        void setBase(float base);
        float getBase();
        void setAltura(float altura);
        float getAltura();
        float getPerimetro();
        float getArea();
};