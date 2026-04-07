// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 31/03/2026
// Número de ejercicio: 1

#include <iostream>

using namespace std;

void IntercambiarValores(int &a, int &b);

int main()
{
    system("cls");
    int x = 5, y = 10;

    cout << "Antes: x = " << x << ", y = " << y << endl;
    
    IntercambiarValores(x, y);
    
    cout << "Despues: x = " << x << ", y = " << y << endl;

    return 0;
}

void IntercambiarValores(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}
