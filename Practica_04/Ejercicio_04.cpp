// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>
using namespace std;

float convertir(float monto, float cambio);

int main() {
    float bs;
    float oficial = 6.97;
    float paralelo = 9.47;

    cout << "----- CONVERSOR DE DIVISAS (Bs a USD) -----" << endl;
    cout << "Ingrese el monto en Bolivianos: ";
    cin >> bs;

    cout << "-------------------------------------------" << endl;
    cout << "Tipo de cambio Oficial (6.97): " << convertir(bs, oficial) << " USD" << endl;
    cout << "Tipo de cambio Paralelo (9.47): " << convertir(bs, paralelo) << " USD" << endl;
    cout << "-------------------------------------------" << endl;

    return 0;
}

float convertir(float monto, float cambio) {
    return monto / cambio;
}
