// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 31/03/2026
// Número de ejercicio: 5

#include <iostream>

using namespace std;

double calcularArea(double lado);
double calcularArea(double base, double altura);
double calcularArea(float radio, float PI);

int main()
{
    system("cls");
    cout << "Cuadrado: " << calcularArea(4.0) << endl;
    cout << "Rectangulo: " << calcularArea(5.0, 2.0) << endl;
    cout << "Circulo: " << calcularArea(3.0f, 3.1415f) << endl;

    return 0;
}

double calcularArea(double lado) 
{ 
    return lado * lado; 
}

double calcularArea(double base, double altura) 
{ 
    return base * altura; 
}

double calcularArea(float radio, float PI) 
{ 
    return PI * radio * radio; 
}
