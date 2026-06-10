// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 1

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void GuardarNombres();
void MostrarNombres();

int main()
{
    system("cls");
    GuardarNombres();
    MostrarNombres();
    return 0;
}

void GuardarNombres()
{
    ofstream archivo;
    int n = 0;
    string nombre;
    archivo.open("nombres.txt", ios::out);
    if (archivo.good())
    {
        cout << "Ingrese la cantidad de nombres a registrar: ";
        cin >> n;
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
            cout << "Ingrese el nombre " << i + 1 << ": ";
            getline(cin, nombre);
            archivo << nombre << endl;
        }
        archivo.close();
    }
}

void MostrarNombres()
{
    ifstream archivo;
    string lineaTexto;
    archivo.open("nombres.txt", ios::in);
    if (archivo.good())
    {
        cout << "\nLista de nombres en el archivo:" << endl;
        while (getline(archivo, lineaTexto))
        {
            cout << lineaTexto << endl;
        }
        archivo.close();
    }
}
