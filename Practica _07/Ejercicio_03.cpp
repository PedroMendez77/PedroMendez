// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 05/04/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>

using namespace std;

void ProcesarCalificaciones(int n);

int main()
{
    system("cls");
    int n;
    cout << "Ingrese la cantidad de calificaciones (N): ";
    cin >> n;
    
    ProcesarCalificaciones(n);
    
    return 0;
}

void ProcesarCalificaciones(int n)
{
    vector<int> calificaciones(n);
    vector<double> desviacion(n);
    double suma = 0, promedio = 0, varianza = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese la calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
    }

    promedio = suma / n;

    cout << "\nCalificacion\tDesviacion" << endl;
    for (int i = 0; i < n; i++)
    {
        desviacion[i] = calificaciones[i] - promedio;
        varianza += (desviacion[i] * desviacion[i]);
        cout << calificaciones[i] << "\t\t" << desviacion[i] << endl;
    }

    varianza = varianza / n;

    cout << "\nSuma Total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Varianza: " << varianza << endl;
}
