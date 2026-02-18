// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 18/02/2026

#include <iostream>
using namespace std;

int main() {
    float precio_producto, precio_final;
    cout << "Ingrese el precio del producto: ";
    cin >> precio_producto;
    precio_final = precio_producto * 1.13;
    cout << "El precio con IVA (13%) es: " << precio_final << endl;
    return 0;
}
