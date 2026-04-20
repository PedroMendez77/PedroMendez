// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 19/04/2026
// Número de ejercicio: 5

#include <iostream>
#include <vector>

using namespace std;

void LlenarMatriz(vector<vector<int>>& matriz, int filas, int col);
void MultiplicarMatrices(vector<vector<int>> A, vector<vector<int>> B, int n, int m);

int main() {
    int n = 0, m = 0;
    
    system("cls");
    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese M: ";
    cin >> m;
    
    vector<vector<int>> matrizA(n, vector<int>(m));
    vector<vector<int>> matrizB(m, vector<int>(n));
    
    cout << "\nLlenar Matriz A (" << n << "x" << m << "):" << endl;
    LlenarMatriz(matrizA, n, m);
    
    cout << "\nLlenar Matriz B (" << m << "x" << n << "):" << endl;
    LlenarMatriz(matrizB, m, n);
    
    cout << "\nMatriz Resultado (" << n << "x" << n << "):" << endl;
    MultiplicarMatrices(matrizA, matrizB, n, m);
    
    system("pause");
    return 0;
}

void LlenarMatriz(vector<vector<int>>& matriz, int filas, int col) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Ingrese valor [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void MultiplicarMatrices(vector<vector<int>> A, vector<vector<int>> B, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int suma = 0;
            for (int k = 0; k < m; k++) {
                suma += A[i][k] * B[k][j];
            }
            cout << suma << "\t";
        }
        cout << endl;
    }
}
