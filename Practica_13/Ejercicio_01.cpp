// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 1

#include <iostream>

using namespace std;

struct Libro
{
    char titulo[50];
    char autor[50];
    int anio_publicacion;
    bool disponible;
};

void IngresarLibro(Libro &l);
void MostrarLibro(Libro l);

int main()
{
    Libro miLibro;
    system("cls");
    IngresarLibro(miLibro);
    MostrarLibro(miLibro);
    return 0;
}

void IngresarLibro(Libro &l)
{
    char opcion;
    cout << "Ingrese el titulo: ";
    cin.getline(l.titulo, 50);
    cout << "Ingrese el autor: ";
    cin.getline(l.autor, 50);
    cout << "Ingrese el anio de publicacion: ";
    cin >> l.anio_publicacion;
    cout << "El libro esta disponible (S/N): ";
    cin >> opcion;
    if (opcion == 'S' || opcion == 's')
    {
        l.disponible = true;
    }
    else
    {
        l.disponible = false;
    }
}

void MostrarLibro(Libro l)
{
    cout << "\nDATOS DEL LIBRO" << endl;
    cout << "Titulo: " << l.titulo << endl;
    cout << "Autor: " << l.autor << endl;
    cout << "Anio: " << l.anio_publicacion << endl;
    if (l.disponible)
    {
        cout << "Estado: Disponible" << endl;
    }
    else
    {
        cout << "Estado: No disponible" << endl;
    }
}
