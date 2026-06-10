// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 2

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void ContarPalabras();

int main()
{
    system("cls");
    ContarPalabras();
    return 0;
}

void ContarPalabras()
{
    ifstream archivo;
    string palabra;
    int contador = 0;
    archivo.open("texto.txt", ios::in);
    if (archivo.good())
    {
        while (archivo >> palabra)
        {
            contador++;
        }
        archivo.close();
        cout << "El archivo contiene " << contador << " palabras." << endl;
    }
    else
    {
        cout << "No se pudo abrir el archivo texto.txt" << endl;
    }
}
