// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 23/02/2026

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero del 1 al 10: ";
    cin >> n;

    for(int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
