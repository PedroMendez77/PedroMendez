// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 1

#include <iostream>

using namespace std;

int SumaDigitos(int n);

int main()
{
    int numero = 0;
    system("cls");
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    
    cout << "La suma de los digitos es: " << SumaDigitos(numero) << endl;
    
    return 0;
}

int SumaDigitos(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + SumaDigitos(n / 10);
    }
}
