// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 18/02/2026

#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese edad: "; cin >> edad;
    if (edad >= 18 && edad <= 25) cout << "Esta en el rango [18-25]" << endl;
    else cout << "Fuera de rango" << endl;
    return 0;
}
