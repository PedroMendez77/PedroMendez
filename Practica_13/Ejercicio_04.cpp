// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>

using namespace std;

struct Empleado
{
    char nombre[50];
    char genero[20];
    float salario;
};

void IngresarEmpleados(vector<Empleado> &empleados, int n);
void MostrarMinMaxSalario(vector<Empleado> empleados);

int main()
{
    int n;
    vector<Empleado> empleados;
    system("cls");
    cout << "Ingrese la cantidad de empleados: ";
    cin >> n;
    IngresarEmpleados(empleados, n);
    MostrarMinMaxSalario(empleados);
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
        cout << "Genero: ";
        cin.getline(e.genero, 20);
        cout << "Salario: ";
        cin >> e.salario;
        empleados.push_back(e);
    }
}

void MostrarMinMaxSalario(vector<Empleado> empleados)
{
    if (empleados.size() > 0)
    {
        Empleado minEmp = empleados[0];
        Empleado maxEmp = empleados[0];
        for (int i = 1; i < empleados.size(); i++)
        {
            if (empleados[i].salario < minEmp.salario)
            {
                minEmp = empleados[i];
            }
            if (empleados[i].salario > maxEmp.salario)
            {
                maxEmp = empleados[i];
            }
        }
        cout << "\nEMPLEADO CON MENOR SALARIO:" << endl;
        cout << "Nombre: " << minEmp.nombre << ", Salario: " << minEmp.salario << endl;
        cout << "\nEMPLEADO CON MAYOR SALARIO:" << endl;
        cout << "Nombre: " << maxEmp.nombre << ", Salario: " << maxEmp.salario << endl;
    }
}
