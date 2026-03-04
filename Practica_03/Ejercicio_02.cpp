// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int n, moneda;
    float caras = 0, cruz = 0;

    cout << "Cuantas veces lanzara la moneda? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        moneda = rand() % 2;
        if (moneda == 0) {
            caras = caras + 1;
        } else {
            cruz = cruz + 1;
        }
    }

    cout << "Porcentaje de Caras: " << (caras / n) * 100 << "%" << endl;
    cout << "Porcentaje de Cruz: " << (cruz / n) * 100 << "%" << endl;

    return 0;
}
