// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 19/04/2026
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void InterseccionClientes(vector<string> listaA, vector<string> listaB);

int main() {
    vector<string> listaA = {"Juan", "Maria", "Pedro", "Ana", "Luis"};
    vector<string> listaB = {"Ana", "Carlos", "Pedro", "Sofia", "Luis"};
    
    system("cls");
    InterseccionClientes(listaA, listaB);
    
    system("pause");
    return 0;
}

void InterseccionClientes(vector<string> listaA, vector<string> listaB) {
    cout << "Clientes en comun: ";
    bool primero = true;
    for (int i = 0; i < listaA.size(); i++) {
        for (int j = 0; j < listaB.size(); j++) {
            if (listaA[i] == listaB[j]) {
                if (!primero) {
                    cout << ", ";
                }
                cout << listaA[i];
                primero = false;
            }
        }
    }
    cout << endl;
}
