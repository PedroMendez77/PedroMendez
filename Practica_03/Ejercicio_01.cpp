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
    int n, dado, pares = 0;

    cout << "Cuantas veces lanzara el dado? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        dado = rand() % 6 + 1;
        if (dado % 2 == 0) {
            pares = pares + 1;
        }
    }

    cout << "Frecuencia de caras pares: " << pares << endl;

    return 0;
}
