// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 19/04/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>

using namespace std;

const int FILAS = 3;
const int COLUMNAS = 4;

void MostrarMapa(char mapa[FILAS][COLUMNAS]);
void MostrarFilasColumnasLibres(char mapa[FILAS][COLUMNAS]);
void BuscarCoordenadas(char mapa[FILAS][COLUMNAS], vector<int>& fZombies, vector<int>& cZombies);
int ContarZombies(char mapa[FILAS][COLUMNAS]);
void AnalizarEntrada(char mapa[FILAS][COLUMNAS]);

int main() {
    char mapa[FILAS][COLUMNAS] = {
        {'x', 'o', 'o', 'o'},
        {'o', 'o', 'o', 'o'},
        {'x', 'o', 'o', 'o'}
    };
    
    vector<int> filasZombies;
    vector<int> colZombies;
    int totalZombies = 0;
    int espacioLibre = 0;
    
    system("cls");
    
    cout << "a) Mostrar matriz" << endl;
    MostrarMapa(mapa);
    
    cout << "b) ";
    MostrarFilasColumnasLibres(mapa);
    
    cout << "c) Posiciones en la matriz:" << endl;
    BuscarCoordenadas(mapa, filasZombies, colZombies);
    for (int i = 0; i < filasZombies.size(); i++) {
        cout << filasZombies[i] << " -- " << colZombies[i] << endl;
    }
    
    totalZombies = ContarZombies(mapa);
    cout << "d) total muertos vivientes: " << totalZombies << endl;
    
    cout << "e) ";
    AnalizarEntrada(mapa);
    
    espacioLibre = (FILAS * COLUMNAS) - totalZombies;
    cout << "f) espacio libre: " << espacioLibre << endl;
    
    system("pause");
    return 0;
}

void MostrarMapa(char mapa[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << mapa[i][j] << " ";
        }
        cout << endl;
    }
}

void MostrarFilasColumnasLibres(char mapa[FILAS][COLUMNAS]) {
    int filasLibres = 0;
    int colLibres = 0;
    
    for (int i = 0; i < FILAS; i++) {
        bool libre = true;
        for (int j = 0; j < COLUMNAS; j++) {
            if (mapa[i][j] == 'x' || mapa[i][j] == 'X') {
                libre = false;
            }
        }
        if (libre) filasLibres++;
    }
    
    for (int j = 0; j < COLUMNAS; j++) {
        bool libre = true;
        for (int i = 0; i < FILAS; i++) {
            if (mapa[i][j] == 'x' || mapa[i][j] == 'X') {
                libre = false;
            }
        }
        if (libre) colLibres++;
    }
    
    cout << "filas libres: " << filasLibres << endl;
    cout << "   columnas libres: " << colLibres << endl;
}

void BuscarCoordenadas(char mapa[FILAS][COLUMNAS], vector<int>& fZombies, vector<int>& cZombies) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (mapa[i][j] == 'x' || mapa[i][j] == 'X') {
                fZombies.push_back(i);
                cZombies.push_back(j);
            }
        }
    }
}

int ContarZombies(char mapa[FILAS][COLUMNAS]) {
    int contador = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (mapa[i][j] == 'x' || mapa[i][j] == 'X') {
                contador++;
            }
        }
    }
    return contador;
}

void AnalizarEntrada(char mapa[FILAS][COLUMNAS]) {
    int zombiesPrimeraCol = 0;
    for (int i = 0; i < FILAS; i++) {
        if (mapa[i][0] == 'x' || mapa[i][0] == 'X') {
            zombiesPrimeraCol++;
        }
    }
    
    if (zombiesPrimeraCol >= 2) {
        cout << "no es posible entrar al complejo!" << endl;
    } else {
        cout << "es posible entrar al complejo!" << endl;
    }
}
