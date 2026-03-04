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
    int N, num, mayor, menor;
    float suma = 0;

    cout << "Cuantos numeros generar? ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        num = rand() % 1000 + 1;
        suma = suma + num;

        if (i == 1) {
            mayor = num;
            menor = num;
        } else {
            if (num > mayor) mayor = num;
            if (num < menor) menor = num;
        }
    }

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << suma / N << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}
