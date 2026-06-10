// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 6

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void FiltrarTemperaturas();

int main()
{
    system("cls");
    FiltrarTemperaturas();
    return 0;
}

void FiltrarTemperaturas()
{
    ifstream archivoEntrada;
    ofstream archivoSalida;
    string ciudad;
    float temperatura = 0.0;
    float limite = 0.0;
    
    cout << "Ingrese el limite de temperatura: ";
    cin >> limite;
    
    archivoEntrada.open("temperaturas.txt", ios::in);
    archivoSalida.open("altas_temperaturas.txt", ios::out);
    
    if (archivoEntrada.good() && archivoSalida.good())
    {
        while (archivoEntrada >> ciudad >> temperatura)
        {
            if (temperatura > limite)
            {
                archivoSalida << ciudad << " " << temperatura << endl;
            }
        }
        archivoEntrada.close();
        archivoSalida.close();
        cout << "Archivo altas_temperaturas.txt generado correctamente." << endl;
    }
    else
    {
        cout << "Error al abrir los archivos." << endl;
    }
}
