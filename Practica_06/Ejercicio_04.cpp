// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 31/03/2026
// Número de ejercicio: 4

#include <iostream>

using namespace std;

double CalcularPrecioTotal(double precioBase, double impuesto = 0.13);

int main()
{
    system("cls");
    double precio;
    cout << "Precio base: "; 
    cin >> precio;

    cout << "Total: " << CalcularPrecioTotal(precio) << endl;

    return 0;
}

double CalcularPrecioTotal(double precioBase, double impuesto)
{
    return precioBase + (precioBase * impuesto);
}
