// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 23/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int aleatorio = rand() % 100 + 1;
    int intento, contador = 0;

    cout << "Piense un numero del 1 al 100 y trate de adivinarlo." << endl;

    do {
        cout << "Ingrese su numero: ";
        cin >> intento;
        contador++;

        if (intento < aleatorio) cout << "Es mayor!" << endl;
        else if (intento > aleatorio) cout << "Es menor!" << endl;
        
    } while (intento != aleatorio);

    cout << "Felicidades! Lo adivino en " << contador << " intentos." << endl;
    return 0;
}
