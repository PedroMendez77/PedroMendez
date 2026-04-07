// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 05/04/2026
// Número de ejercicio: 7

#include <iostream>
#include <vector>

using namespace std;

void LlenarEImprimirVector();

int main()
{
    system("cls");
    LlenarEImprimirVector();
    return 0;
}

void LlenarEImprimirVector()
{
    vector<int> v;
    int numero;
    
    cout << "Rellene el vector (Maximo 10 elementos o ingrese un negativo para parar)" << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese elemento " << i + 1 << ": ";
        cin >> numero;
        
        if (numero < 0) 
        {
            break;
        }
        v.push_back(numero);
    }
    
    cout << "\nVector resultante:" << endl;
    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
