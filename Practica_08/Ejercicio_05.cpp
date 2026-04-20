// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 19/04/2026
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ValidarCorreo(string correo);

int main() {
    string correo;
    
    system("cls");
    cout << "Ingrese el correo electronico: ";
    cin >> correo;
    
    ValidarCorreo(correo);
    
    system("pause");
    return 0;
}

void ValidarCorreo(string correo) {
    int arrobas = 0;
    int posArroba = -1;
    bool hayPunto = false;
    
    for(int i = 0; i < correo.length(); i++) {
        if(correo[i] == '@') {
            arrobas++;
            posArroba = i;
        }
    }
    
    if(arrobas == 1) {
        for(int i = posArroba + 1; i < correo.length(); i++) {
            if(correo[i] == '.') {
                hayPunto = true;
            }
        }
    }
    
    if(arrobas == 1 && hayPunto) {
        cout << "Correo electronico valido" << endl;
    } else {
        cout << "Correo electronico invalido" << endl;
    }
}
