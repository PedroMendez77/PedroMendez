// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 19/04/2026
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool EsPalindromo(string texto);

int main() {
    string texto;
    
    system("cls");
    cout << "Ingrese texto: ";
    getline(cin, texto);
    
    if(EsPalindromo(texto)) {
        cout << "Es palindromo" << endl;
    } else {
        cout << "No es palindromo" << endl;
    }
    
    system("pause");
    return 0;
}

bool EsPalindromo(string texto) {
    string limpio = "";
    
    for(int i = 0; i < texto.length(); i++) {
        char c = texto[i];
        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
            if(c >= 'A' && c <= 'Z') {
                c = c + 32;
            }
            limpio += c;
        }
    }
    
    int inicio = 0;
    int fin = limpio.length() - 1;
    
    while(inicio < fin) {
        if(limpio[inicio] != limpio[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}
