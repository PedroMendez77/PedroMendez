// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 7
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void PromedioCalificaciones();

int main()
{
    system("cls");
    PromedioCalificaciones();
    return 0;
}

void PromedioCalificaciones()
{
    ifstream archivoEntrada;
    ofstream archivoSalida;
    string linea;
    string nombre;
    float calificacion = 0.0;
    float suma = 0.0;
    int contador = 0;
    float promedio = 0.0;
    
    archivoEntrada.open("calificaciones.txt", ios::in);
    archivoSalida.open("promedios.txt", ios::out);
    
    if (archivoEntrada.good() && archivoSalida.good())
    {
        while (getline(archivoEntrada, linea))
        {
            stringstream ss(linea);
            ss >> nombre;
            suma = 0.0;
            contador = 0;
            while (ss >> calificacion)
            {
                suma += calificacion;
                contador++;
            }
            if (contador > 0)
            {
                promedio = suma / contador;
                archivoSalida << nombre << " " << promedio << endl;
            }
        }
        archivoEntrada.close();
        archivoSalida.close();
        cout << "Archivo promedios.txt generado." << endl;
    }
    else
    {
        cout << "Error al abrir los archivos." << endl;
    }
}
