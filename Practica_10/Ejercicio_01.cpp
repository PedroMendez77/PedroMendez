// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Mendez Verastegui
// Fecha creación: 19/04/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void procesarResultados(const vector<string> &nombres, vector<double> &notas, double &promedio, int &aprobados) {
    double suma = 0;
    aprobados = 0;
    
    int cantidad = notas.size(); 

    for (int i = 0; i < cantidad; i++) {
        if (notas[i] >= 45 && notas[i] <= 50) {
            notas[i] = 51;
        }
        
        if (notas[i] >= 51) {
            aprobados++;
        }
        
        suma = suma + notas[i]; 
    }

    if (cantidad > 0) {
        promedio = suma / cantidad;
    } else {
        promedio = 0;
    }
}

int main() {
    vector<string> nombres = {"Hugo", "Anacleto", "Pedro", "Kylian", "Luchito"};
    vector<double> notas = {48.5, 85.0, 42.0, 50.0, 90.0};
    
    double promedioClase = 0;
    int totalAprobados = 0;
    int cantidadNombres = nombres.size();
    
    system("cls");
    procesarResultados(nombres, notas, promedioClase, totalAprobados);

    cout << "Lista estudiantes y notas actualizadas:" << endl;
    for (int i = 0; i < cantidadNombres; i++) {
        cout << nombres[i] << " tiene la nota: " << notas[i] << endl;
    }

    cout << "\nEstadisticas" << endl;
    cout << "Promedio general de esos alumnos: " << promedioClase << endl;
    cout << "Total de aprobados: " << totalAprobados << endl;

    cout << endl;
    system("pause");
    return 0;
}
