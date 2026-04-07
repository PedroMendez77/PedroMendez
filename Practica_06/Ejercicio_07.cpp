// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 31/03/2026
// Número de ejercicio: 7

#include <iostream>

using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota);

int main()
{
    system("cls");
    double suma = 0, n_ing;
    int cont = 0, n;

    cout << "Cantidad N: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Nota " << i + 1 << ": ";
        cin >> n_ing;
        agregarNota(suma, cont, n_ing);
    }

    cout << "Notas: " << cont << endl;
    cout << "Promedio: " << (cont > 0 ? suma / cont : 0) << endl;

    return 0;
}

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota)
{
    sumaTotal += nuevaNota;
    cantidadNotas++;
}
