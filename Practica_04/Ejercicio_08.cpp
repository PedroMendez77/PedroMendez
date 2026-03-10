// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>
using namespace std;

int contar(int n);

int main() {
    int num;
    cout << "----- CONTADOR DE DIGITOS -----" << endl;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    cout << "El numero tiene " << contar(num) << " digitos." << endl;
    return 0;
}

int contar(int n) {
    int c = 0;
    if (n == 0) return 1;
    while (n > 0) {
        n = n / 10;
        c = c + 1;
    }
    return c;
}
