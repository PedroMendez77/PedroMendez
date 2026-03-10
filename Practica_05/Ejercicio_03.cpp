// Materia: Programacion I, Paralelo 4
// Autor: Pedro Enrique Mendez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creacion: 09/03/2026

#include <iostream>

using namespace std;

float ProcesarPlanilla(int, float, float);

int main()
{
    int horas_trabajadas;
    float tarifa_hora = 0.0;
    float bono = 0.0;
    float salario_final = 0.0;
    
    system("cls");

    cout << "--- PLANILLA DE TRABAJADOR ---" << endl;
    cout << "Ingrese horas trabajadas: ";
    cin >> horas_trabajadas;
    cout << "Ingrese tarifa por hora (Bs): ";
    cin >> tarifa_hora;
    cout << "Ingrese porcentaje de bonificacion extra: ";
    cin >> bono;

    salario_final = ProcesarPlanilla(horas_trabajadas, tarifa_hora, bono);

    cout << "--------------------------------" << endl;
    cout << "Salario Total Final: " << salario_final << " Bs." << endl;

    return 0;
}

float ProcesarPlanilla(int horas, float tarifa, float porcentaje_bono)
{
    float salario_base = 0.0;
    float salario_bonificacion = 0.0;
    float salario_total = 0.0;
    int horas_extra = 0;

    if (horas <= 8)
    {
        salario_base = horas * tarifa;
        salario_bonificacion = 0.0;
    }
    else
    {
        salario_base = 8 * tarifa;
        horas_extra = horas - 8;
        salario_bonificacion = horas_extra * (tarifa + (tarifa * (porcentaje_bono / 100)));
    }

    salario_total = salario_base + salario_bonificacion;

    cout << "a. Salario base del trabajador: " << salario_base << " Bs." << endl;
    
    if (horas > 8)
    {
        cout << "b. Salario por bonificacion (Horas extra: " << horas_extra << "): " << salario_bonificacion << " Bs." << endl;
    }
    else
    {
        cout << "b. Salario por bonificacion: 0 Bs." << endl;
    }

    return salario_total;
}
