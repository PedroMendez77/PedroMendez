// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>
using namespace std;

float promedio(float a, float b);

int main() {
    int n;
    float n1, n2;
    cout << "----- PROMEDIO DE CALIFICACIONES -----" << endl;
    cout << "Ingrese la cantidad de personas a procesar: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "--- Persona " << i << " ---" << endl;
        cout << "Nota 1: "; cin >> n1;
        cout << "Nota 2: "; cin >> n2;
        cout << "Promedio: " << promedio(n1, n2) << endl;
    }
    return 0;
}

float promedio(float a, float b) {
    return (a + b) / 2;
}
