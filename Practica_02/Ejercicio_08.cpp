// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 23/02/2026

#include <iostream>
using namespace std;

int main() {
    int n;
    float precio, total = 0;
    cout << "Cantidad de productos vendidos: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << "Precio del producto " << i << ": ";
        cin >> precio;
        total += precio * 1.13; // Precio con IVA
    }

    if (total > 1000) {
        total = total * 0.95; // Descuento del 5%
        cout << "Se aplico un descuento del 5%." << endl;
    }

    cout << "Monto final a pagar: " << total << endl;
    return 0;
}
