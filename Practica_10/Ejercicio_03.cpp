// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Mendez Verastegui
// Fecha creación: 19/04/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void limpiarBitacora(vector<string> &registros, char caracterProhibido, int &correccionesRealizadas) {
    int cantidad = registros.size();
    correccionesRealizadas = 0;

    for (int i = 0; i < cantidad; i++) {
        string nombreActual = registros[i];
        string nombreLimpio = "";
        bool huboError = false;

        int largoNombre = nombreActual.length();
        for (int j = 0; j < largoNombre; j++) {
            if (nombreActual[j] != caracterProhibido) {
                nombreLimpio = nombreLimpio + nombreActual[j];
            } else {
                huboError = true;
            }
        }

        if (huboError == true) {
            registros[i] = nombreLimpio;
            correccionesRealizadas = correccionesRealizadas + 1;
        }
    }
}

int main() {
    vector<string> ingresos = {"Juan#Perez", "Maria Lopez", "Carlos#Diaz", "Ana", "Luis#"};
    int correcciones = 0;
    char prohibido = '#';

    system("cls");
    cout << "Registros originales:" << endl;
    for (int i = 0; i < ingresos.size(); i++) {
        cout << "- " << ingresos[i] << endl;
    }

    limpiarBitacora(ingresos, prohibido, correcciones);

    cout << "\nRegistros limpios:" << endl;
    for (int i = 0; i < ingresos.size(); i++) {
        cout << "- " << ingresos[i] << endl;
    }
    cout << "\nTotal de errores corregidos: " << correcciones << endl;

    cout << endl;
    system("pause");
    return 0;
}
