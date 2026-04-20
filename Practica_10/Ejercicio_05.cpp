// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Mendez Verastegui
// Fecha creación: 19/04/2026
// Número de ejercicio: 5

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void asignarAsientoEspecial(char sala[10][10], vector<string> &espera, int fila, int col, bool &exito) {
    if (sala[fila][col] == 'D' && espera.size() > 0) {
        sala[fila][col] = 'R';
        cout << "Asiento [" << fila << "][" << col << "] asignado a: " << espera[0] << endl;
        
        // Forma de borrar el primer elemento del vector
        espera.erase(espera.begin());
        exito = true;
    } else {
        exito = false;
    }
}

int main() {
    char mapa[10][10];
    vector<string> listaEspera = {"Michael Valdez", "Isai Chavez", "Pedro Mendez"};
    
    // Llenar todo de 'D'
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mapa[i][j] = 'D';
        }
    }
    
    // Asiento ocupado de prueba
    mapa[2][3] = 'R';

    int f, c;
    bool pudoAsignar = false;

    system("cls");
    cout << "Personas en espera actuales: " << listaEspera.size() << endl;
    cout << "Ingrese fila (0-9): ";
    cin >> f;
    cout << "Ingrese columna (0-9): ";
    cin >> c;
    cout << endl;

    if (f >= 0 && f < 10 && c >= 0 && c < 10) {
        asignarAsientoEspecial(mapa, listaEspera, f, c, pudoAsignar);

        if (pudoAsignar == true) {
            cout << "La reserva fue un exito." << endl;
        } else {
            cout << "No se pudo realizar la reserva (Esta ocupado o no hay personas en espera)." << endl;
        }
    } else {
        cout << "Numeros fuera de rango." << endl;
    }
    
    cout << "Personas en espera despues de la operacion: " << listaEspera.size() << endl;

    cout << endl;
    system("pause");
    return 0;
}
