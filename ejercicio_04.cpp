// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 18/02/2026

#include <iostream>
using namespace std;

int main() {
    float practicas, teoria, participacion, notaFinal;
    cout << "Nota de practicas: "; cin >> practicas;
    cout << "Nota de teoria: "; cin >> teoria;
    cout << "Nota de participacion: "; cin >> participacion;
    notaFinal = (practicas * 0.3) + (teoria * 0.6) + (participacion * 0.1);
    cout << "La nota final es: " << notaFinal << endl;
    return 0;
}
