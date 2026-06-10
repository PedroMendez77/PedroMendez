// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 8

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

struct AtletaOlimpico
{
    char nombre[40];
    char departamento[30];
    char deporte[30];
    int medallas;
};

struct MedalleroDepto
{
    char departamento[30];
    int total_medallas;
};

void IngresarAtletas(vector<AtletaOlimpico> &atletas, int n);
void MostrarMedallero(vector<AtletaOlimpico> atletas);

int main()
{
    int n;
    vector<AtletaOlimpico> atletas;
    system("cls");
    cout << "Ingrese la cantidad de atletas: ";
    cin >> n;
    IngresarAtletas(atletas, n);
    MostrarMedallero(atletas);
    return 0;
}

void IngresarAtletas(vector<AtletaOlimpico> &atletas, int n)
{
    AtletaOlimpico a;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "\nATLETA " << i + 1 << endl;
        cout << "Nombre: ";
        cin.getline(a.nombre, 40);
        cout << "Departamento: ";
        cin.getline(a.departamento, 30);
        cout << "Deporte: ";
        cin.getline(a.deporte, 30);
        cout << "Medallas ganadas: ";
        cin >> a.medallas;
        atletas.push_back(a);
    }
}

void MostrarMedallero(vector<AtletaOlimpico> atletas)
{
    vector<MedalleroDepto> resumen;
    MedalleroDepto md;
    bool encontrado;
    
    for (int i = 0; i < atletas.size(); i++)
    {
        encontrado = false;
        for (int j = 0; j < resumen.size(); j++)
        {
            if (strcmp(resumen[j].departamento, atletas[i].departamento) == 0)
            {
                resumen[j].total_medallas += atletas[i].medallas;
                encontrado = true;
                break;
            }
        }
        if (!encontrado)
        {
            strcpy(md.departamento, atletas[i].departamento);
            md.total_medallas = atletas[i].medallas;
            resumen.push_back(md);
        }
    }
    
    cout << "\nMEDALLERO FINAL POR DEPARTAMENTO" << endl;
    for (int i = 0; i < resumen.size(); i++)
    {
        cout << resumen[i].departamento << ": " << resumen[i].total_medallas << " medallas" << endl;
    }
}
