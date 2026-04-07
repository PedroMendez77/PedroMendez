// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 31/03/2026
// Número de ejercicio: 2

#include <iostream>

using namespace std;

double CalcularVolumen(double radio, double altura = 10.0);

int main()
{
    system("cls");
    double r, h;
    cout << "Radio: "; 
    cin >> r;
    cout << "Altura: "; 
    cin >> h;

    cout << "Volumen: " << CalcularVolumen(r, h) << endl;

    return 0;
}

double CalcularVolumen(double radio, double altura)
{
    return 3.14159 * (radio * radio) * altura;
}
