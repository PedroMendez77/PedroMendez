// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 23/02/2026

#include <iostream>
using namespace std;

int main() {
    int num, sumaTotal = 0, sumaPares = 0, sumaImpares = 0, sumaPrimos = 0;

    do {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> num;

        if (num != 0) {
            sumaTotal += num;
            
            // Pares e Impares
            if (num % 2 == 0) sumaPares += num;
            else sumaImpares += num;

            // Primos
            int div = 0;
            for(int i = 1; i <= num; i++) {
                if(num % i == 0) div++;
            }
            if(div == 2) sumaPrimos += num;
        }
    } while (num != 0);

    cout << "Suma total: " << sumaTotal << endl;
    cout << "Suma pares: " << sumaPares << endl;
    cout << "Suma impares: " << sumaImpares << endl;
    cout << "Suma primos: " << sumaPrimos << endl;

    return 0;
}
