// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 8

#include <iostream>

using namespace std;

void ConjeturaUllman(int n);

int main()
{
    int n = 0;
    system("cls");
    cout << "Conjetura de Ullman" << endl;
    cout << "-------------------" << endl;
    cout << "Ingrese un entero positivo mayor a 1: ";
    cin >> n;
    
    if (n > 1)
    {
        cout << "Secuencia: ";
        ConjeturaUllman(n);
        cout << endl;
    }
    else
    {
        cout << "El numero debe ser mayor a 1." << endl;
    }
    
    return 0;
}

void ConjeturaUllman(int n)
{
    cout << n << "\t";
    
    if (n == 1)
    {
        return;
    }
    else if (n % 2 == 0)
    {
        ConjeturaUllman(n / 2);
    }
    else
    {
        ConjeturaUllman((n * 3) + 1);
    }
}