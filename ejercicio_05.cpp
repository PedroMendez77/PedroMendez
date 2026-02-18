// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 18/02/2026

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float c1, c2, hipo;
    cout << "Ingrese cateto 1: "; cin >> c1;
    cout << "Ingrese cateto 2: "; cin >> c2;
    hipo = sqrt(pow(c1, 2) + pow(c2, 2));
    cout << "La hipotenusa es: " << hipo << endl;
    return 0;
}
