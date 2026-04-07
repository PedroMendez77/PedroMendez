// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 05/04/2026
// Número de ejercicio: 5

#include <iostream>
#include <vector>

using namespace std;

void CombinarVectores(int n);

int main()
{
    system("cls");
    int dimension;
    cout << "Ingrese la dimension (N) de los vectores: ";
    cin >> dimension;
    
    CombinarVectores(dimension);
    
    return 0;
}

void CombinarVectores(int n)
{
    vector<int> vector1(n), vector2(n), combinado;
    
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
    
    for (int i = 0; i < n; i++) 
    {
        combinado.push_back(vector1[i]);
    }
    
    for (int i = 0; i < n; i++) 
    {
        combinado.push_back(vector2[i]);
    }
    
    cout << "\nVector Combinado:" << endl;
    for (int i = 0; i < combinado.size(); i++) 
    {
        cout << combinado[i] << " ";
    }
    cout << endl;
}
