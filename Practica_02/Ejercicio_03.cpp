// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 23/02/2026

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        suma += i;
    }
    cout << "El resultado es: " << suma << endl;
    return 0;
}
