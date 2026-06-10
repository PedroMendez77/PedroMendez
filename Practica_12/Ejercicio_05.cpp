// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 5

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct DatosProducto
{
    char nombre[30];
    float precio;
};

void ActualizarPrecio();

int main()
{
    system("cls");
    ActualizarPrecio();
    return 0;
}

void ActualizarPrecio()
{
    ifstream archivoLectura;
    ofstream archivoEscritura;
    vector<DatosProducto> productos;
    DatosProducto producto;
    string nombreBuscado;
    float nuevoPrecio = 0.0;
    bool encontrado = false;
    
    archivoLectura.open("productos.txt", ios::in);
    if (archivoLectura.good())
    {
        while (archivoLectura >> producto.nombre >> producto.precio)
        {
            productos.push_back(producto);
        }
        archivoLectura.close();
        
        cout << "Ingrese el nombre del producto a actualizar: ";
        getline(cin, nombreBuscado);
        cout << "Ingrese el nuevo precio: ";
        cin >> nuevoPrecio;
        
        for (int i = 0; i < productos.size(); i++)
        {
            if (productos[i].nombre == nombreBuscado)
            {
                productos[i].precio = nuevoPrecio;
                encontrado = true;
            }
        }
        
        if (encontrado)
        {
            archivoEscritura.open("productos.txt", ios::out);
            for (int i = 0; i < productos.size(); i++)
            {
                archivoEscritura << productos[i].nombre << " " << productos[i].precio << endl;
            }
            archivoEscritura.close();
            cout << "Producto actualizado correctamente." << endl;
        }
        else
        {
            cout << "El producto no existe." << endl;
        }
    }
    else
    {
        cout << "No se pudo abrir el archivo productos.txt" << endl;
    }
}
