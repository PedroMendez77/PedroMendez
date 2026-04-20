// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 19/04/2026
// Número de ejercicio: 4

#include <iostream>

using namespace std;

void GenerarPatron(int n);

int main() {
    int n = 0;
    
    system("cls");
    cout << "Ingrese orden N: ";
    cin >> n;
    cout << endl;
    
    GenerarPatron(n);
    
    system("pause");
    return 0;
}

void GenerarPatron(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (i * 2) + j + 1 << "\t";
        }
        cout << endl;
    }
}
