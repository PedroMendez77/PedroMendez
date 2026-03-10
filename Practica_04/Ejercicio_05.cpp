// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>
using namespace std;

bool esPar(int n);

int main() {
    int num;
    cout << "----- VERIFICADOR DE PARIDAD -----" << endl;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    if (esPar(num)) {
        cout << "Resultado: TRUE (El numero es par)" << endl;
    } else {
        cout << "Resultado: FALSE (El numero es impar)" << endl;
    }
    return 0;
}

bool esPar(int n) {
    return (n % 2 == 0);
}
