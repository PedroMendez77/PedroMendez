// Materia: Programacion I, Paralelo 4
// Autor: Pedro Enrique Mendez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creacion: 09/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

float ProcesarVentas(int);

int main()
{
    int cantidadProductos;
    float pagoFinal = 0.0;
    
    srand(time(NULL));
    system("cls");

    cout << "--- COMERCIAL LA ESTRELLA ---" << endl;
    cout << "Ingrese la cantidad de productos vendidos: ";
    cin >> cantidadProductos;

    pagoFinal = ProcesarVentas(cantidadProductos);

    cout << "--------------------------------" << endl;
    cout << "Monto final a pagar por el cliente: " << pagoFinal << " Bs." << endl;

    return 0;
}

float ProcesarVentas(int n)
{
    float suma_ventas = 0.0;
    float iva = 0.0;
    float total_con_iva = 0.0;
    int precio_aleatorio = 0;

    for (int i = 1; i <= n; i++)
    {
        precio_aleatorio = (rand() % (50 - 20 + 1)) + 20;
        suma_ventas += precio_aleatorio;
    }

    iva = suma_ventas * 0.13;
    total_con_iva = suma_ventas + iva;

    cout << "Suma total de ventas (sin IVA): " << suma_ventas << " Bs." << endl;
    cout << "Pago del IVA (13 por ciento): " << iva << " Bs." << endl;

    if (total_con_iva > 2500)
    {
        cout << "Se aplica descuento del 5 por ciento." << endl;
        total_con_iva = total_con_iva - (total_con_iva * 0.05);
    }

    return total_con_iva;
}

