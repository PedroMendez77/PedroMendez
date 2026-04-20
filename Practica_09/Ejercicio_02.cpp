// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 19/04/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void MostrarMatriz(vector<vector<int>> matriz, int n);
void CalcularResultados(vector<vector<int>> matriz, int n);

int main() {
    srand(time(NULL));
    int n = 0, a = 0, b = 0;
    
    system("cls");
    cout << "Ingrese orden de la matriz (N): ";
    cin >> n;
    cout << "Ingrese limite inferior (A): ";
    cin >> a;
    cout << "Ingrese limite superior (B): ";
    cin >> b;
    
    vector<vector<int>> matriz(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = GenerarAleatorio(a, b);
        }
    }
    
    cout << "\nMatriz Generada:" << endl;
    MostrarMatriz(matriz, n);
    cout << endl;
    
    CalcularResultados(matriz, n);
    
    system("pause");
    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior) {
    return (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
}

void MostrarMatriz(vector<vector<int>> matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void CalcularResultados(vector<vector<int>> matriz, int n) {
    int sumaCol = 0;
    long long prodFila = 1;
    int mayor = matriz[0][0];
    int posFila = 0, posCol = 0;
    double sumaTotal = 0;
    int totalElementos = n * n;
    
    for (int i = 0; i < n; i++) {
        sumaCol += matriz[i][n - 1];
    }
    
    for (int j = 0; j < n; j++) {
        prodFila *= matriz[n - 1][j];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                posFila = i;
                posCol = j;
            }
            sumaTotal += matriz[i][j];
        }
    }
    
    double media = sumaTotal / totalElementos;
    double sumatoriaVarianza = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sumatoriaVarianza += pow(matriz[i][j] - media, 2);
        }
    }
    
    double desviacion = sqrt(sumatoriaVarianza / totalElementos);
    
    cout << "Suma de la ultima columna: " << sumaCol << endl;
    cout << "Producto de la ultima fila: " << prodFila << endl;
    cout << "Mayor valor: " << mayor << " (Fila " << posFila << ", Columna " << posCol << ")" << endl;
    cout << "Desviacion estandar: " << desviacion << endl;
}
