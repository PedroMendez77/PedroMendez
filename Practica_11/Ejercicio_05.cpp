// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 5

#include <iostream>
#include <vector>

using namespace std;

int SumaVector(vector<int> &numeros, int tamano);

int main()
{
    vector<int> numeros = {5, 10, 15, 20, 25}; 
    
    system("cls");
    cout << "Suma de elementos en un vector" << endl;
    cout << "------------------------------" << endl;
    
    cout << "Elementos del vector: ";
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;
    
    cout << "La suma de los elementos es: " << SumaVector(numeros, numeros.size()) << endl;
    
    return 0;
}

int SumaVector(vector<int> &numeros, int tamano)
{
    if (tamano == 0)
    {
        return 0;
    }
    else
    {
        return numeros[tamano - 1] + SumaVector(numeros, tamano - 1); 
    }
}
