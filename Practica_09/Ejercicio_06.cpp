// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 19/04/2026
// Número de ejercicio: 6

#include <iostream>
#include <vector>

using namespace std;

void LlenarMatriz(vector<vector<int>>& matriz, int n, int m);
void ImprimirTranspuesta(vector<vector<int>> matriz, int n, int m);

int main() {
    int n = 0, m = 0;
    
    system("cls");
    cout << "Ingrese cantidad de filas (N): ";
    cin >> n;
    cout << "Ingrese cantidad de columnas (M): ";
    cin >> m;
    
    vector<vector<int>> matriz(n, vector<int>(m));
    
    cout << "\nLlenando matriz:" << endl;
    LlenarMatriz(matriz, n, m);
    
    cout << "\nMatriz Transpuesta:" << endl;
    ImprimirTranspuesta(matriz, n, m);
    
    system("pause");
    return 0;
}

void LlenarMatriz(vector<vector<int>>& matriz, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Ingrese valor [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void ImprimirTranspuesta(vector<vector<int>> matriz, int n, int m) {
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
