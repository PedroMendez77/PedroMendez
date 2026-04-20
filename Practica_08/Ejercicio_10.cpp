// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 19/04/2026
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void PonerMayusculas(string texto);

int main() {
    string texto;
    
    system("cls");
    cout << "Ingrese texto: ";
    getline(cin, texto);
    
    PonerMayusculas(texto);
    
    system("pause");
    return 0;
}

void PonerMayusculas(string texto) {
    bool nuevaPalabra = true;
    
    for(int i = 0; i < texto.length(); i++) {
        if(texto[i] == ' ') {
            nuevaPalabra = true;
        } else if(nuevaPalabra) {
            if(texto[i] >= 'a' && texto[i] <= 'z') {
                texto[i] = texto[i] - 32;
            }
            nuevaPalabra = false;
        }
    }
    
    cout << texto << endl;
}
