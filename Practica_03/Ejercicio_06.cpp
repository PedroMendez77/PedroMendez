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
    int N, n1, n2, n3;

    cout << "Ingrese cantidad de ninos: ";
    cin >> N;

    n1 = rand() % (N + 1);
    if (N - n1 > 0) {
        n2 = rand() % (N - n1 + 1);
    } else {
        n2 = 0;
    }
    n3 = N - n1 - n2;

    int total = (n1 * 6) + (n2 * 3) + (n3 * 2);

    cout << "Ninos 1 ano: " << n1 << endl;
    cout << "Ninos 2 anos: " << n2 << endl;
    cout << "Ninos 3 anos: " << n3 << endl;
    cout << "Total panales: " << total << endl;

    return 0;
}
