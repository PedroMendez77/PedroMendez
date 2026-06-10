// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 2

#include <iostream>

using namespace std;

int Potencia(int a, int n);

int main()
{
    int base = 0;
    int exponente = 0;
    system("cls");
    
    cout << "Ingrese la base (a): ";
    cin >> base;
    cout << "Ingrese el exponente (n): ";
    cin >> exponente;
    
    cout << "El resultado de " << base << "^" << exponente << " es: " << Potencia(base, exponente) << endl;
    
    return 0;
}

int Potencia(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return a * Potencia(a, n - 1);
    }
}
