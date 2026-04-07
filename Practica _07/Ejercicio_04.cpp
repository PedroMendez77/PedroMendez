// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 05/04/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>

using namespace std;

void MultiplicarVectores(int n);

int main()
{
    system("cls");
    int dimension;
    cout << "Ingrese la dimension (N) de los vectores: ";
    cin >> dimension;
    
    MultiplicarVectores(dimension);
    
    return 0;
}

void MultiplicarVectores(int n)
{
    vector<int> vector1(n), vector2(n), resultado(n);
    
    cout << "--- Llenar Vector 1 ---" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> vector1[i];
    }
    
    cout << "--- Llenar Vector 2 ---" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> vector2[i];
    }
    
    cout << "\nVector Multiplicado:" << endl;
    for (int i = 0; i < n; i++)
    {
        resultado[i] = vector1[i] * vector2[i];
        cout << resultado[i] << " ";
    }
    cout << endl;
}
