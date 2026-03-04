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
    int N, num, primos = 0;

    cout << "Cuantos numeros generar? ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        num = rand() % 10000 + 1;
        int div = 0;
        for (int j = 1; j <= num; j++) {
            if (num % j == 0) div++;
        }
        if (div == 2) primos++;
    }

    cout << "Cantidad de primos encontrados: " << primos << endl;

    return 0;
}
