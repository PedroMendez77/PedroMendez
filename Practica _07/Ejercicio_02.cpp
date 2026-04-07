// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 06/04/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>

using namespace std;

void DesplegarVoltios(vector<double> v);

int main()
{
    system("cls");
    vector<double> voltios;
    
    voltios.push_back(11.95);
    voltios.push_back(16.32);
    voltios.push_back(12.15);
    voltios.push_back(8.22);
    voltios.push_back(15.98);
    voltios.push_back(26.22);
    voltios.push_back(13.54);
    voltios.push_back(6.45);
    voltios.push_back(17.59);
    
    DesplegarVoltios(voltios);
    
    return 0;
}

void DesplegarVoltios(vector<double> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
        if ((i + 1) % 3 == 0) 
        {
            cout << endl;
        }
    }
}
