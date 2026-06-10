// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 6

#include <iostream>
#include <vector>

using namespace std;

struct Empleado
{
    char nombre[50];
    int id;
    float sueldo;
    int antiguedad;
};

void IngresarEmpleados(vector<Empleado> &empleados, int n);
int ContarSueldoMayor(vector<Empleado> empleados, float limite);
float PromedioAntiguedad(vector<Empleado> empleados);

int main()
{
    int n;
    float limiteSueldo;
    vector<Empleado> empleados;
    system("cls");
    cout << "Ingrese la cantidad de empleados: ";
    cin >> n;
    IngresarEmpleados(empleados, n);
    
    cout << "\nIngrese el sueldo a comparar: ";
    cin >> limiteSueldo;
    cout << "Cantidad de empleados con sueldo mayor a " << limiteSueldo << ": " << ContarSueldoMayor(empleados, limiteSueldo) << endl;
    cout << "El promedio de antiguedad es: " << PromedioAntiguedad(empleados) << " anios." << endl;
    
    return 0;
}

void IngresarEmpleados(vector<Empleado> &empleados, int n)
{
    Empleado e;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "\nEMPLEADO " << i + 1 << endl;
        cout << "Nombre: ";
        cin.getline(e.nombre, 50);
        cout << "ID: ";
        cin >> e.id;
        cout << "Sueldo: ";
        cin >> e.sueldo;
        cout << "Antiguedad (anios): ";
        cin >> e.antiguedad;
        empleados.push_back(e);
    }
}

int ContarSueldoMayor(vector<Empleado> empleados, float limite)
{
    int contador = 0;
    for (int i = 0; i < empleados.size(); i++)
    {
        if (empleados[i].sueldo > limite)
        {
            contador++;
        }
    }
    return contador;
}

float PromedioAntiguedad(vector<Empleado> empleados)
{
    if (empleados.size() == 0)
    {
        return 0.0;
    }
    float suma = 0.0;
    for (int i = 0; i < empleados.size(); i++)
    {
        suma += empleados[i].antiguedad;
    }
    return suma / empleados.size();
}
