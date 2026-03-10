// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>
using namespace std;

float calcularDistancia(float v, float t);

int main() {
    float v, t;
    cout << "----- CALCULO DE DISTANCIA (MRU) -----" << endl;
    cout << "Ingrese la velocidad (v): ";
    cin >> v;
    cout << "Ingrese el tiempo (t): ";
    cin >> t;
    cout << "La distancia recorrida es: " << calcularDistancia(v, t) << endl;
    return 0;
}

float calcularDistancia(float v, float t) {
    return v * t;
}
