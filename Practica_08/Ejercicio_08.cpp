// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 19/04/2026
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void DividirCadena(string cadena, char delimitador);

int main() {
    string cadena;
    char delimitador;
    
    system("cls");
    cout << "Ingrese cadena: ";
    getline(cin, cadena);
    cout << "Ingrese caracter delimitador: ";
    cin >> delimitador;
    cout << endl;
    
    DividirCadena(cadena, delimitador);
    
    system("pause");
    return 0;
}

void DividirCadena(string cadena, char delimitador) {
    string token = "";
    
    for(int i = 0; i < cadena.length(); i++) {
        if(cadena[i] == delimitador) {
            if(token != "") {
                cout << token << endl;
                token = "";
            }
        } else {
            if(cadena[i] != ' ') {
                token += cadena[i];
            }
        }
    }
    if(token != "") {
        cout << token << endl;
    }
}
