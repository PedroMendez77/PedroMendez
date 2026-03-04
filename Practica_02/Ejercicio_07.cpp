// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 23/02/2026

#include <iostream>
using namespace std;

int main() {
    int num, sumaDiv = 0;
    cout << "Ingrese un numero: ";
    cin >> num;

    for(int i = 1; i < num; i++) {
        if(num % i == 0) sumaDiv += i;
    }

    if(sumaDiv == num) cout << "Es un numero perfecto." << endl;
    else cout << "No es un numero perfecto." << endl;

    return 0;
}
