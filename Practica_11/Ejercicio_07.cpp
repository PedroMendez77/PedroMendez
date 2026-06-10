// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 7

#include <iostream>

using namespace std;

int FuncionQ(int n);

int main()
{
    int n = 0;
    system("cls");
    cout << "Calculo de la funcion Q(n) = 1^2 + 2^2 + 3^2 + ... + n^2" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    
    cout << "El resultado de Q(" << n << ") es: " << FuncionQ(n) << endl;
    
    return 0;
}

int FuncionQ(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n * n) + FuncionQ(n - 1);
    }
}