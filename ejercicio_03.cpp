// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 18/02/2026

#include <iostream>
using namespace std;

int main() {
    int edad;
    char sexo;
    float altura;
    cout << "Ingrese edad: "; cin >> edad;
    cout << "Ingrese sexo (M/F): "; cin >> sexo;
    cout << "Ingrese altura en metros: "; cin >> altura;
    cout << "\nDatos: " << edad << " años, " << sexo << ", " << altura << " metros." << endl;
    return 0;
}
