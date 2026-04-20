// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 19/04/2026
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void EliminarDigitos(string cadena);

int main() {
    string cadena;
    
    system("cls");
    cout << "Ingrese la cadena con numeros: ";
    cin >> cadena;
    
    EliminarDigitos(cadena);
    
    system("pause");
    return 0;
}

void EliminarDigitos(string cadena) {
    string resultado = "";
    
    for(int i = 0; i < cadena.length(); i++) {
        if(!(cadena[i] >= '0' && cadena[i] <= '9')) {
            resultado += cadena[i];
        }
    }
    
    cout << resultado << endl;
}
