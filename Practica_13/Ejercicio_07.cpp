// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 7

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

struct Producto
{
    char nombre[30];
    char codigo[5];
    float precio;
    int cantidad_en_inventario;
    char observaciones[50];
};

void IngresarProductos(vector<Producto> &productos, int n);
void MostrarMasCaro(vector<Producto> productos);
void MostrarTotalInventario(vector<Producto> productos);

int main()
{
    int n;
    vector<Producto> productos;
    system("cls");
    cout << "Ingrese la cantidad de productos: ";
    cin >> n;
    IngresarProductos(productos, n);
    MostrarMasCaro(productos);
    MostrarTotalInventario(productos);
    return 0;
}

void IngresarProductos(vector<Producto> &productos, int n)
{
    Producto p;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "\nPRODUCTO " << i + 1 << endl;
        cout << "Nombre: ";
        cin.getline(p.nombre, 30);
        cout << "Codigo: ";
        cin.getline(p.codigo, 5);
        cout << "Precio: ";
        cin >> p.precio;
        cout << "Cantidad en inventario: ";
        cin >> p.cantidad_en_inventario;
        if (p.cantidad_en_inventario < 5)
        {
            strcpy(p.observaciones, "PRUDUCTO CON BAJA CANTIDAD DE INVENTARIO");
        }
        else
        {
            strcpy(p.observaciones, "-");
        }
        productos.push_back(p);
    }
}

void MostrarMasCaro(vector<Producto> productos)
{
    if (productos.size() > 0)
    {
        Producto maxP = productos[0];
        for (int i = 1; i < productos.size(); i++)
        {
            if (productos[i].precio > maxP.precio)
            {
                maxP = productos[i];
            }
        }
        cout << "\nPRODUCTO MAS CARO" << endl;
        cout << "Nombre: " << maxP.nombre << endl;
        cout << "Precio: " << maxP.precio << endl;
    }
}

void MostrarTotalInventario(vector<Producto> productos)
{
    int total = 0;
    for (int i = 0; i < productos.size(); i++)
    {
        total += productos[i].cantidad_en_inventario;
        if (strcmp(productos[i].observaciones, "PRUDUCTO CON BAJA CANTIDAD DE INVENTARIO") == 0)
        {
            cout << "ADVERTENCIA: " << productos[i].nombre << " -> " << productos[i].observaciones << endl;
        }
    }
    cout << "\nCANTIDAD TOTAL DE PRODUCTOS EN INVENTARIO: " << total << endl;
}
