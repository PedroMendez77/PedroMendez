// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>

using namespace std;

struct Atleta
{
    char nombre[50];
    char pais[30];
    int edad;
    int mejor_tiempo;
};

void IngresarAtletas(vector<Atleta> &atletas, int n);
void MostrarMejorAtleta(vector<Atleta> atletas);

int main()
{
    int n;
    vector<Atleta> atletas;
    system("cls");
    cout << "Ingrese la cantidad de atletas: ";
    cin >> n;
    IngresarAtletas(atletas, n);
    MostrarMejorAtleta(atletas);
    return 0;
}

void IngresarAtletas(vector<Atleta> &atletas, int n)
{
    Atleta a;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "\nATLETA " << i + 1 << endl;
        cout << "Nombre: ";
        cin.getline(a.nombre, 50);
        cout << "Pais: ";
        cin.getline(a.pais, 30);
        cout << "Edad: ";
        cin >> a.edad;
        cout << "Mejor tiempo (segundos): ";
        cin >> a.mejor_tiempo;
        atletas.push_back(a);
    }
}

void MostrarMejorAtleta(vector<Atleta> atletas)
{
    if (atletas.size() > 0)
    {
        Atleta mejor = atletas[0];
        for (int i = 1; i < atletas.size(); i++)
        {
            if (atletas[i].mejor_tiempo < mejor.mejor_tiempo)
            {
                mejor = atletas[i];
            }
        }
        cout << "\nEL ATLETA CON EL MEJOR TIEMPO ES:" << endl;
        cout << "Nombre: " << mejor.nombre << endl;
        cout << "Pais: " << mejor.pais << endl;
    }
}
