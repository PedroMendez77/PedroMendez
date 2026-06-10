// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 4

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void BuscarTexto();

int main()
{
    system("cls");
    BuscarTexto();
    return 0;
}

void BuscarTexto()
{
    ifstream archivo;
    string frase;
    string linea;
    int contador = 0;
    size_t posicion = 0;
    
    cout << "Ingrese la palabra o frase a buscar: ";
    getline(cin, frase);
    
    archivo.open("datos.txt", ios::in);
    if (archivo.good())
    {
        while (getline(archivo, linea))
        {
            posicion = linea.find(frase, 0);
            while (posicion != string::npos)
            {
                contador++;
                posicion = linea.find(frase, posicion + frase.length());
            }
        }
        archivo.close();
        cout << "La frase aparece " << contador << " veces en el archivo." << endl;
    }
    else
    {
        cout << "No se pudo abrir el archivo datos.txt" << endl;
    }
}
