// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 18/02/2026

#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4;
    cout << "Ingrese tres numeros: "; cin >> n1 >> n2 >> n3;
    cout << "Ingrese el cuarto numero: "; cin >> n4;
    if (n4 == n1 || n4 == n2 || n4 == n3) cout << "Coincide" << endl;
    else cout << "No coincide" << endl;
    return 0;
}
