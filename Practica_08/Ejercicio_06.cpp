// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 19/04/2026
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void InvertirPalabras(string oracion);

int main() {
    string oracion;
    
    system("cls");
    cout << "Ingrese una oracion: ";
    getline(cin, oracion);
    
    InvertirPalabras(oracion);
    
    system("pause");
    return 0;
}

void InvertirPalabras(string oracion) {
    vector<string> palabras;
    string palabraTemp = "";
    
    for(int i = 0; i < oracion.length(); i++) {
        if(oracion[i] == ' ') {
            if(palabraTemp != "") {
                palabras.push_back(palabraTemp);
                palabraTemp = "";
            }
        } else {
            palabraTemp += oracion[i];
        }
    }
    if(palabraTemp != "") {
        palabras.push_back(palabraTemp);
    }
    
    for(int i = palabras.size() - 1; i >= 0; i--) {
        cout << palabras[i];
        if(i > 0) cout << " ";
    }
    cout << endl;
}
