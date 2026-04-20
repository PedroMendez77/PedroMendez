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
void CalcularPorcentajes(vector<int> notas);

int main() {
    srand(time(NULL));
    int n = 0;
    vector<int> calificaciones;
    
    system("cls");
    cout << "Ingrese cantidad N de calificaciones: ";
    cin >> n;
    
    cout << "Calificaciones: ";
    for(int i = 0; i < n; i++) {
        int nota = GenerarAleatorio(0, 100);
        calificaciones.push_back(nota);
        cout << nota << " ";
    }
    cout << endl << endl;
    
    CalcularPorcentajes(calificaciones);
    
    system("pause");
    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior) {
    return (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
}

void CalcularPorcentajes(vector<int> notas) {
    float rep = 0, reg = 0, bue = 0, exc = 0;
    int total = notas.size();
    
    for(int i = 0; i < total; i++) {
        if(notas[i] <= 59) rep++;
        else if(notas[i] <= 79) reg++;
        else if(notas[i] <= 89) bue++;
        else exc++;
    }
    
    cout << "Reprobados: " << (rep / total) * 100 << "%" << endl;
    cout << "Regulares: " << (reg / total) * 100 << "%" << endl;
    cout << "Buenos: " << (bue / total) * 100 << "%" << endl;
    cout << "Excelentes: " << (exc / total) * 100 << "%" << endl;
}
