// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 09/03/2026

#include <iostream>

using namespace std;

float CalcularSueldoVendedora(int, float);

int main()
{
    int n, antiguedad;
    float total_vendido = 0.0;
    float sueldo_total = 0.0;
    
    system("cls");

    cout << "--- COSMETICOS DE BELLEZA ---" << endl;
    cout << "Ingrese la cantidad de vendedoras (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "\n--- Vendedora " << i << " ---" << endl;
        cout << "Ingrese la antiguedad (en anos): ";
        cin >> antiguedad;
        cout << "Ingrese el monto total vendido en el mes (Bs): ";
        cin >> total_vendido;

        sueldo_total = CalcularSueldoVendedora(antiguedad, total_vendido);
        cout << "Sueldo total a cancelar a la Vendedora " << i << ": " << sueldo_total << " Bs." << endl;
        system("pause");
    }

    return 0;
}

float CalcularSueldoVendedora(int antiguedad, float total_vendido)
{
    float sueldo_basico = 0.0;
    float comision = 0.0;
    float sueldo_final = 0.0;
    
    if (antiguedad < 2)
    {
        sueldo_basico = 1500.0;
    }
    else
    {
        if (antiguedad <= 5)
        {
            sueldo_basico = 2000.0;
        }
        else
        {
            sueldo_basico = 2500.0;
        }
    }

    comision = total_vendido * 0.10;
    sueldo_final = sueldo_basico + comision;

    cout << "Sueldo basico asignado: " << sueldo_basico << " Bs." << endl;
    cout << "Comision extra (10%): " << comision << " Bs." << endl;

    return sueldo_final;
}
