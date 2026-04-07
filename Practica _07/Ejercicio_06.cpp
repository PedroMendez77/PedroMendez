// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 05/04/2026
// Número de ejercicio: 6

#include <iostream>
#include <vector>

using namespace std;

void SumarVectores();

int main()
{
    system("cls");
    SumarVectores();
    return 0;
}

void SumarVectores()
{
    vector<int> vector1(5), vector2(5), vector3(5);
    
    cout << "--- Llenar vector1 ---" << endl;
    for (int i = 0; i < 5; i++) 
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> vector1[i];
    }
    
    cout << "--- Llenar vector2 ---" << endl;
    for (int i = 0; i < 5; i++) 
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> vector2[i];
    }
    
    cout << "\nvector3 (Suma):" << endl;
    for (int i = 0; i < 5; i++)
    {
        vector3[i] = vector1[i] + vector2[i];
        cout << vector3[i] << " ";
    }
    cout << endl;
}
5
