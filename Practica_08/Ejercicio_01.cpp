// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 19/04/2026
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void GenerarPersonas(int n);

int main() {
    srand(time(NULL));
    int nroVeces = 0;
    
    system("cls");
    cout << "Ingrese cuantas personas generar (N): ";
    cin >> nroVeces;
    
    GenerarPersonas(nroVeces);
    
    system("pause");
    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior) {
    return (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
}

void GenerarPersonas(int n) {
    vector<string> nombres = {"Juan", "Maria", "Pedro", "Ana", "Luis", "Carlos", "Sofia", "Lucia", "Miguel", "Elena"};
    vector<string> apellidos = {"Perez", "Gomez", "Lopez", "Diaz", "Martinez", "Garcia", "Fernandez", "Rodriguez", "Sanchez", "Romero"};
    vector<int> edades = {18, 21, 25, 30, 19, 22, 28, 35, 40, 24};
    
    cout << endl;
    for (int i = 0; i < n; i++) {
        int posNombre = GenerarAleatorio(0, 9);
        int posApellido = GenerarAleatorio(0, 9);
        int posEdad = GenerarAleatorio(0, 9);
        cout << nombres[posNombre] << " " << apellidos[posApellido] << " - " << edades[posEdad] << " anios." << endl;
    }
}
