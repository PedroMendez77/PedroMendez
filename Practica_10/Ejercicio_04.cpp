// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Mendez Verastegui
// Fecha creación: 19/04/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void analizarClima(float datos[4][7], int ciudadIdx, float &maxima, float &minima, float &promedio) {
    maxima = datos[ciudadIdx][0];
    minima = datos[ciudadIdx][0];
    float suma = 0;

    for (int j = 0; j < 7; j++) {
        if (datos[ciudadIdx][j] > maxima) {
            maxima = datos[ciudadIdx][j];
        }
        if (datos[ciudadIdx][j] < minima) {
            minima = datos[ciudadIdx][j];
        }
        suma = suma + datos[ciudadIdx][j];
    }
    promedio = suma / 7;
}

int main() {
    float temperaturas[4][7] = {
        {12.5, 15.0, 10.2, 14.1, 13.5, 11.0, 12.8}, // La Paz
        {25.1, 28.5, 24.0, 26.3, 27.2, 25.5, 26.8}, // Cochabamba
        {30.5, 32.1, 31.0, 33.5, 30.2, 31.8, 32.0}, // Santa Cruz
        {15.0, 18.2, 16.5, 17.1, 19.0, 16.8, 17.5}  // Tarija
    };

    string nombreCiudad;
    int indice = -1;
    float max, min, prom;

    system("cls");
    cout << "Ingrese el nombre de la ciudad (La Paz, Cochabamba, Santa Cruz, Tarija): ";
    getline(cin, nombreCiudad);

    if (nombreCiudad == "La Paz") indice = 0;
    if (nombreCiudad == "Cochabamba") indice = 1;
    if (nombreCiudad == "Santa Cruz") indice = 2;
    if (nombreCiudad == "Tarija") indice = 3;

    if (indice != -1) {
        analizarClima(temperaturas, indice, max, min, prom);
        cout << "\nResultados para " << nombreCiudad << ":" << endl;
        cout << "Temperatura Maxima: " << max << endl;
        cout << "Temperatura Minima: " << min << endl;
        cout << "Promedio semanal: " << prom << endl;
    } else {
        cout << "Ciudad no encontrada. Asegurese de escribir bien las mayusculas." << endl;
    }

    cout << endl;
    system("pause");
    return 0;
}
