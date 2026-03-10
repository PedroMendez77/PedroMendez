// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>
using namespace std;

int sumatoria(int n);

int main() {
    int n;
    cout << "----- SUMATORIA DE NUMEROS NATURALES -----" << endl;
    cout << "Ingrese el valor de N: ";
    cin >> n;
    cout << "La suma de 1 hasta " << n << " es: " << sumatoria(n) << endl;
    return 0;
}

int sumatoria(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s = s + i;
    }
    return s;
}
