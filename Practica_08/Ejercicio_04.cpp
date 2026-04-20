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
void AgruparPixeles(vector<int> pixeles);

int main() {
    srand(time(NULL));
    int n = 0;
    vector<int> pixeles;
    
    system("cls");
    cout << "Ingrese cantidad de pixeles N: ";
    cin >> n;
    
    cout << "Pixeles: ";
    for(int i = 0; i < n; i++) {
        int p = GenerarAleatorio(0, 255);
        pixeles.push_back(p);
        cout << p << " ";
    }
    cout << endl << endl;
    
    AgruparPixeles(pixeles);
    
    system("pause");
    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior) {
    return (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
}

void AgruparPixeles(vector<int> pixeles) {
    int rangos[26] = {0};
    
    for(int i = 0; i < pixeles.size(); i++) {
        int indice = pixeles[i] / 10;
        rangos[indice]++;
    }
    
    for(int i = 0; i < 26; i++) {
        int inicio = i * 10;
        int fin = inicio + 9;
        if(fin > 255) fin = 255;
        
        if(rangos[i] > 0) {
            cout << inicio << "-" << fin << ": " << rangos[i] << " pixeles" << endl;
        }
    }
}
