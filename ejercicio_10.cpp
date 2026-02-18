// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 18/02/2026

#include <iostream>
using namespace std;

int main() {
    int m;
    string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", 
                      "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    cout << "Ingrese numero de mes (1-12): "; cin >> m;
    if (m >= 1 && m <= 12) cout << meses[m-1] << endl;
    else cout << "Invalido" << endl;
    return 0;
}
