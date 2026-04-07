// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 31/03/2026
// Número de ejercicio: 3

#include <iostream>

using namespace std;

void ModificarValores(int val, int &ref);

int main()
{
    system("cls");
    int n1 = 20, n2 = 20;

    cout << "Originales: " << n1 << " y " << n2 << endl;
    
    ModificarValores(n1, n2);
    
    cout << "Finales: " << n1 << " y " << n2 << endl;

    return 0;
}

void ModificarValores(int val, int &ref)
{
    val = val * 2;
    ref = ref + 10;
}
