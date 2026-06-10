// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 9

#include <iostream>
#include <vector>

using namespace std;

struct Calificacion
{
    float T1;
    float T2;
    float T3;
    float T4;
    float EF;
    float NP;
    float NF;
};

void IngresarNotas(vector<Calificacion> &alumnos, int n);
void CalcularEstadisticas(vector<Calificacion> alumnos);

int main()
{
    int n;
    vector<Calificacion> alumnos;
    system("cls");
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;
    IngresarNotas(alumnos, n);
    CalcularEstadisticas(alumnos);
    return 0;
}

void IngresarNotas(vector<Calificacion> &alumnos, int n)
{
    Calificacion c;
    for (int i = 0; i < n; i++)
    {
        cout << "\nNOTAS DEL ALUMNO " << i + 1 << endl;
        cout << "T1: ";
        cin >> c.T1;
        cout << "T2: ";
        cin >> c.T2;
        cout << "T3: ";
        cin >> c.T3;
        cout << "T4: ";
        cin >> c.T4;
        cout << "EF: ";
        cin >> c.EF;
        
        c.NP = (c.T1 + c.T2 + c.T3 + c.T4) / 4.0;
        c.NF = (0.7 * c.NP) + (0.3 * c.EF);
        alumnos.push_back(c);
    }
}

void CalcularEstadisticas(vector<Calificacion> alumnos)
{
    if (alumnos.size() > 0)
    {
        float suma = 0.0;
        float minNota = alumnos[0].NF;
        float maxNota = alumnos[0].NF;
        
        for (int i = 0; i < alumnos.size(); i++)
        {
            cout << "Alumno " << i + 1 << " - Nota Final: " << alumnos[i].NF << endl;
            suma += alumnos[i].NF;
            if (alumnos[i].NF < minNota)
            {
                minNota = alumnos[i].NF;
            }
            if (alumnos[i].NF > maxNota)
            {
                maxNota = alumnos[i].NF;
            }
        }
        cout << "\nESTADISTICAS DEL CURSO" << endl;
        cout << "Promedio: " << suma / alumnos.size() << endl;
        cout << "Nota Minima: " << minNota << endl;
        cout << "Nota Maxima: " << maxNota << endl;
    }
}
