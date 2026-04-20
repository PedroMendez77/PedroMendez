// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Mendez Verastegui
// Fecha creación: 19/04/2026
// Número de ejercicio: 0

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void generarNombres(vector<string> Nombres, vector<string> Apellidos, int N) {
    int IntroNombre;
    int IntroApellido;
    
    cout << "Nombres Generados Aleatoriamente" << endl;
    for (int i = 0; i < N; i++) {
        IntroNombre = rand() % 8;
        IntroApellido = rand() % 8;
        cout << i + 1 << ". " << Nombres[IntroNombre] << " " << Apellidos[IntroApellido] << endl;
    }
}

int main() {
    srand(time(0)); 

    vector<string> Nombres = {"Mateo", "Sofia", "Martin", "Lucia", "Alejandro", "Maria", "Daniel", "Isabel"};
    vector<string> Apellidos = {"Garcia", "Rodriguez", "Gonzales", "Lopez", "Camacho", "Martinez", "Perez", "Mendez"};
    
    int cantidad;
    
    system("cls");
    cout << "Ingrese la cantidad de nombres para generar: ";
    cin >> cantidad;
    cout << endl;
    
    generarNombres(Nombres, Apellidos, cantidad);

    cout << endl;
    system("pause");
    return 0;
}
