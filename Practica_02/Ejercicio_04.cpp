// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 23/02/2026

#include <iostream>
using namespace std;

int main() {
    int n;
    long sumaFactoriales = 0;
    cout << "Ingrese n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        long fact = 1;
        for(int j = 1; j <= i; j++) {
            fact *= j;
        }
        sumaFactoriales += fact;
    }
    cout << "La suma de factoriales es: " << sumaFactoriales << endl;
    return 0;
}
