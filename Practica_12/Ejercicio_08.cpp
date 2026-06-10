// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 8

#include <iostream>
#include <fstream>

using namespace std;

void ContarElementos();

int main()
{
    system("cls");
    ContarElementos();
    return 0;
}

void ContarElementos()
{
    ifstream archivo;
    char c;
    int lineas = 1;
    int palabras = 0;
    int caracteres = 0;
    bool enPalabra = false;
    
    archivo.open("documento.txt", ios::in);
    if (archivo.good())
    {
        while (archivo.get(c))
        {
            caracteres++;
            if (c == '\n')
            {
                lineas++;
            }
            
            if (c == ' ' || c == '\n' || c == '\t')
            {
                enPalabra = false;
            }
            else if (!enPalabra)
            {
                enPalabra = true;
                palabras++;
            }
        }
        if (caracteres == 0)
        {
            lineas = 0;
        }
        archivo.close();
        
        cout << "Total de lineas: " << lineas << endl;
        cout << "Total de palabras: " << palabras << endl;
        cout << "Total de caracteres: " << caracteres << endl;
    }
    else
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
}
