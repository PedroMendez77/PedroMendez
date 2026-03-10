// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>
using namespace std;

int obtenerMayor(int a, int b, int c);

int main() {
    int n1, n2, n3;
    cout << "----- DETERMINAR EL MAYOR DE TRES NUMEROS -----" << endl;
    cout << "Primer numero: "; cin >> n1;
    cout << "Segundo numero: "; cin >> n2;
    cout << "Tercer numero: "; cin >> n3;
    cout << "El numero mayor de los tres es: " << obtenerMayor(n1, n2, n3) << endl;
    return 0;
}

int obtenerMayor(int a, int b, int c) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}
