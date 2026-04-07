// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 05/04/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void ListaVoltajes();
void ListaTemperaturas();
void ListaCaracteres();
void ListaAnios();
void ListaVelocidades();
void ListaDistancias();

int main()
{
    srand(time(NULL));
    system("cls");

    ListaVoltajes();
    ListaTemperaturas();
    ListaCaracteres();
    ListaAnios();
    ListaVelocidades();
    ListaDistancias();

    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    return (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
}

void ListaVoltajes()
{
    vector<double> v;
    cout << "--- VOLTAJES ---" << endl;
    for (int i = 0; i < 100; i++)
    {
        double dato = GenerarAleatorio(2000, 22000) / 100.0;
        v.push_back(dato);
        cout << v[i] << "V ";
    }
    cout << endl << endl;
}

void ListaTemperaturas()
{
    vector<double> v;
    cout << "--- TEMPERATURAS ---" << endl;
    for (int i = 0; i < 50; i++)
    {
        double dato = GenerarAleatorio(0, 10000) / 100.0;
        v.push_back(dato);
        cout << v[i] << " ";
    }
    cout << endl << endl;
}

void ListaCaracteres()
{
    vector<char> v;
    cout << "--- CARACTERES ---" << endl;
    for (int i = 0; i < 30; i++)
    {
        int ascii;
        int tipo = GenerarAleatorio(1, 3);
        if (tipo == 1) ascii = GenerarAleatorio(65, 90);
        else if (tipo == 2) ascii = GenerarAleatorio(97, 122);
        else ascii = GenerarAleatorio(48, 57);
        
        v.push_back(char(ascii));
        cout << v[i] << " ";
    }
    cout << endl << endl;
}

void ListaAnios()
{
    vector<int> v;
    cout << "--- ANIOS ---" << endl;
    for (int i = 0; i < 100; i++)
    {
        v.push_back(GenerarAleatorio(1990, 2025));
        cout << v[i] << " ";
    }
    cout << endl << endl;
}

void ListaVelocidades()
{
    vector<double> v;
    cout << "--- VELOCIDADES ---" << endl;
    for (int i = 0; i < 32; i++)
    {
        double dato = GenerarAleatorio(1000, 30000) / 100.0;
        v.push_back(dato);
        cout << v[i] << " ";
    }
    cout << endl << endl;
}

void ListaDistancias()
{
    vector<double> v;
    cout << "--- DISTANCIAS ---" << endl;
    for (int i = 0; i < 1000; i++)
    {
        double dato = GenerarAleatorio(100, 100000) / 100.0;
        v.push_back(dato);
        cout << v[i] << " ";
    }
    cout << endl << endl;
}
