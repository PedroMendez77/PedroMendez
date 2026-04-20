// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 19/04/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>

using namespace std;

void LlenarMatriz(vector<vector<int>>& matriz, int n);
void MostrarMatriz(vector<vector<int>> matriz, int n);
void CambiarFilas(vector<vector<int>>& matriz, int n);

int main() {
    int n = 0;
    
    system("cls");
    cout << "Ingrese el orden de la matriz (N): ";
    cin >> n;
    
    vector<vector<int>> matriz(n, vector<int>(n));
    
    LlenarMatriz(matriz, n);
    
    cout << "\nMatriz Original:" << endl;
    MostrarMatriz(matriz, n);
    
    CambiarFilas(matriz, n);
    
    cout << "\nMatriz Modificada:" << endl;
    MostrarMatriz(matriz, n);
    
    system("pause");
    return 0;
}

void LlenarMatriz(vector<vector<int>>& matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese valor [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void MostrarMatriz(vector<vector<int>> matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void CambiarFilas(vector<vector<int>>& matriz, int n) {
    if (n > 1) {
        vector<int> temporal = matriz[0];
        matriz[0] = matriz[n - 1];
        matriz[n - 1] = temporal;
    }
}

