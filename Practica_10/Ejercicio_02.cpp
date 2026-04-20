// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Mendez Verastegui
// Fecha creación: 19/04/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void inicializarInventario(int bodega[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            bodega[i][j] = rand() % 101;
        }
    }
}

void balancearCarga(int bodega[3][3], int filaProducto, int &totalTransferido) {
    if (bodega[filaProducto][0] > 80) {
        int excedente = bodega[filaProducto][0] - 80;
        bodega[filaProducto][0] = 80;
        bodega[filaProducto][1] = bodega[filaProducto][1] + excedente;
        totalTransferido = totalTransferido + excedente;
    }
}

void mostrarReporte(const vector<string> &nombres, int bodega[3][3]) {
    int cantidadProductos = nombres.size();
    for (int i = 0; i < cantidadProductos; i++) {
        cout << nombres[i] << ": ";
        for (int j = 0; j < 3; j++) {
            cout << "Dep" << j + 1 << ": " << bodega[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    srand(time(0));
    vector<string> productos = {"Engranajes", "Rodamientos", "Pistones"};
    int bodega[3][3];
    int totalTransferido = 0;

    system("cls");
    inicializarInventario(bodega);
    
    cout << "Inventario ANTES del balanceo:" << endl;
    mostrarReporte(productos, bodega);

    for (int i = 0; i < 3; i++) {
        balancearCarga(bodega, i, totalTransferido);
    }

    cout << "\nInventario DESPUES del balanceo:" << endl;
    mostrarReporte(productos, bodega);
    cout << "\nTotal unidades transferidas: " << totalTransferido << endl;

    cout << endl;
    system("pause");
    return 0;
}
