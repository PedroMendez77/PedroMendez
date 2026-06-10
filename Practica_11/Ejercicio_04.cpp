// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 4

#include <iostream>

using namespace std;

int gcd(int m, int n);

int main()
{
    int a = 0;
    int b = 0;
    system("cls");
    
    cout << "Calculo del MCD (Maximo Comun Divisor)" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    
    cout << "El MCD de " << a << " y " << b << " es: " << gcd(a, b) << endl;
    
    return 0;
}

int gcd(int m, int n)
{
    if (n == 0)
    {
        return m;
    }
    else
    {
        return gcd(n, m % n);
    }
}
