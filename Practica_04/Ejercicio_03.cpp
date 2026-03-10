// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>
using namespace std;

float calcularVolumen(float radio, float altura);

int main() {
    float r, h;
    cout << "----- VOLUMEN DE UN CILINDRO -----" << endl;
    cout << "Ingrese el radio: ";
    cin >> r;
    cout << "Ingrese la altura: ";
    cin >> h;
    cout << "El volumen total es: " << calcularVolumen(r, h) << " m3" << endl;
    return 0;
}

float calcularVolumen(float radio, float altura) {
    return 3.14159 * radio * radio * altura;
}
