// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>
using namespace std;

float calcularArea(float base, float altura);

int main() {
    float b, h;
    cout << "----- CALCULO DEL AREA DE UN TRIANGULO -----" << endl;
    cout << "Ingrese la base: ";
    cin >> b;
    cout << "Ingrese la altura: ";
    cin >> h;
    cout << "El area resultante es: " << calcularArea(b, h) << endl;
    return 0;
}

float calcularArea(float base, float altura) {
    return (base * altura) / 2;
}
