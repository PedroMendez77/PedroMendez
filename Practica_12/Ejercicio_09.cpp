// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 9

#include <iostream>
#include <fstream>

using namespace std;

void CifradoCesar();

int main()
{
    system("cls");
    CifradoCesar();
    return 0;
}

void CifradoCesar()
{
    ifstream archivoEntrada;
    ofstream archivoSalida;
    char c;
    char cifrado;
    
    archivoEntrada.open("mensaje.txt", ios::in);
    archivoSalida.open("mensaje_cifrado.txt", ios::out);
    
    if (archivoEntrada.good() && archivoSalida.good())
    {
        while (archivoEntrada.get(c))
        {
            if (c >= 'A' && c <= 'Z')
            {
                cifrado = c + 3;
                if (cifrado > 'Z')
                {
                    cifrado = cifrado - 26;
                }
                archivoSalida.put(cifrado);
            }
            else if (c >= 'a' && c <= 'z')
            {
                cifrado = c + 3;
                if (cifrado > 'z')
                {
                    cifrado = cifrado - 26;
                }
                archivoSalida.put(cifrado);
            }
            else
            {
                archivoSalida.put(c);
            }
        }
        archivoEntrada.close();
        archivoSalida.close();
        cout << "Cifrado Cesar completado en mensaje_cifrado.txt." << endl;
    }
    else
    {
        cout << "Error al abrir los archivos." << endl;
    }
}
