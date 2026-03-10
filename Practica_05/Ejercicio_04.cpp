// Materia: Programacion I, Paralelo 4
// Autor: Pedro Enrique Mendez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creacion: 09/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int ObtenerCostoTarjeta(int);
int ObtenerRegaloTarjeta(int);
int CalcularTarjetas(int, int);
int CalcularCambio(int, int);

int main()
{
    int n_clientes = 0;
    int monto = 0;
    int tipo_tarjeta = 0;
    int costo = 0;
    int regalo = 0;
    int cantidad = 0;
    int ahorro = 0;
    int cambio = 0;

    srand(time(NULL));
    system("cls");

    cout << "--- SIMULACION TIGO TE YAPA ---" << endl;
    cout << "Ingrese la cantidad de clientes a simular: ";
    cin >> n_clientes;

    for (int i = 1; i <= n_clientes; i++)
    {
        monto = (rand() % (1000 - 10 + 1)) + 10;
        tipo_tarjeta = (rand() % 6) + 1; 

        costo = ObtenerCostoTarjeta(tipo_tarjeta);
        regalo = ObtenerRegaloTarjeta(tipo_tarjeta);

        cantidad = CalcularTarjetas(monto, costo);
        cambio = CalcularCambio(monto, costo);
        ahorro = cantidad * regalo;

        cout << "\n--- Cliente " << i << " ---" << endl;
        cout << "Presupuesto: " << monto << " Bs." << endl;
        cout << "Tipo de tarjeta seleccionada: Opcion " << tipo_tarjeta << " (Costo: " << costo << " Bs)" << endl;
        
        if (cantidad > 0)
        {
            cout << "Tarjetas a comprar: " << cantidad << endl;
            cout << "Ahorro total: " << ahorro << " Bs." << endl;
            cout << "Cambio sobrante: " << cambio << " Bs." << endl;
        }
        else
        {
            cout << "El cliente no tiene saldo suficiente." << endl;
        }
        system("pause");
    }

    return 0;
}

int ObtenerCostoTarjeta(int tipo)
{
    int costo = 0;
    switch (tipo)
    {
        case 1: costo = 10; break;
        case 2: costo = 20; break;
        case 3: costo = 30; break;
        case 4: costo = 50; break;
        case 5: costo = 100; break;
        case 6: costo = 200; break;
        default: costo = 0; break;
    }
    return costo;
}

int ObtenerRegaloTarjeta(int tipo)
{
    int regalo = 0;
    switch (tipo)
    {
        case 1: regalo = 5; break;
        case 2: regalo = 10; break;
        case 3: regalo = 15; break;
        case 4: regalo = 25; break;
        case 5: regalo = 50; break;
        case 6: regalo = 100; break;
        default: regalo = 0; break;
    }
    return regalo;
}

int CalcularTarjetas(int presupuesto, int precio)
{
    int total_tarjetas = 0;
    total_tarjetas = presupuesto / precio;
    return total_tarjetas;
}

int CalcularCambio(int presupuesto, int precio)
{
    int sobra = 0;
    sobra = presupuesto % precio;
    return sobra;
}
