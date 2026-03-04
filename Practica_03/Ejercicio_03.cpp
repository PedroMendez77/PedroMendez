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
    int numero = rand() % 10 + 1;
    long factorial = 1;

    for (int i = 1; i <= numero; i++) {
        factorial = factorial * i;
    }

    cout << "Numero aleatorio: " << numero << endl;
    cout << "Factorial: " << factorial << endl;

    return 0;
}
