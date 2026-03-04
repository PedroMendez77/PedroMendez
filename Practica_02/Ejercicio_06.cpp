// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 23/02/2026

#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Ingrese dos numeros distintos: ";
    cin >> n1 >> n2;

    if (n1 > n2) {
        for(int i = n1; i >= n2; i--) cout << i << " ";
    } else {
        for(int i = n1; i <= n2; i++) cout << i << " ";
    }
    cout << endl;
    return 0;
}
