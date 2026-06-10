// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 6

#include <iostream>
#include <vector>

using namespace std;

bool CompararVectores(vector<int> &vec1, vector<int> &vec2, int indice);

int main()
{
    vector<int> vector1 = {1, 2, 3, 4, 5};
    vector<int> vector2 = {1, 2, 3, 4, 5};
    
    system("cls");
    cout << "Comparacion de vectores" << endl;
    cout << "-----------------------" << endl;
    
    if (vector1.size() != vector2.size())
    {
        cout << "Los vectores NO son iguales (Tienen distinto tamaño)." << endl;
    }
    else
    {
        if (CompararVectores(vector1, vector2, vector1.size()))
        {
            cout << "Los vectores SI son iguales." << endl;
        }
        else
        {
            cout << "Los vectores NO son iguales." << endl;
        }
    }
    
    return 0;
}

bool CompararVectores(vector<int> &vec1, vector<int> &vec2, int indice)
{
    if (indice == 0)
    {
        return true;
    }
    else if (vec1[indice - 1] != vec2[indice - 1])
    {
        return false;
    }
    else
    {
        return CompararVectores(vec1, vec2, indice - 1);
    }
}