// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 5

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

struct Pelicula
{
    char titulo[50];
    char director[50];
    int duracion;
    int anio_estreno;
    char genero[30];
};

void IngresarPeliculas(vector<Pelicula> &peliculas, int n);
void BuscarPorGenero(vector<Pelicula> peliculas, char genero[]);
void BuscarPorDirector(vector<Pelicula> peliculas, char director[]);

int main()
{
    int n;
    char buscarG[30];
    char buscarD[50];
    vector<Pelicula> peliculas;
    system("cls");
    cout << "Ingrese la cantidad de peliculas: ";
    cin >> n;
    IngresarPeliculas(peliculas, n);
    
    cin.ignore();
    cout << "\nIngrese el genero a buscar: ";
    cin.getline(buscarG, 30);
    BuscarPorGenero(peliculas, buscarG);
    
    cout << "\nIngrese el director a buscar: ";
    cin.getline(buscarD, 50);
    BuscarPorDirector(peliculas, buscarD);
    
    return 0;
}

void IngresarPeliculas(vector<Pelicula> &peliculas, int n)
{
    Pelicula p;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "\nPELICULA " << i + 1 << endl;
        cout << "Titulo: ";
        cin.getline(p.titulo, 50);
        cout << "Director: ";
        cin.getline(p.director, 50);
        cout << "Duracion (minutos): ";
        cin >> p.duracion;
        cout << "Anio de estreno: ";
        cin >> p.anio_estreno;
        cin.ignore();
        cout << "Genero: ";
        cin.getline(p.genero, 30);
        peliculas.push_back(p);
    }
}

void BuscarPorGenero(vector<Pelicula> peliculas, char genero[])
{
    cout << "\nPELICULAS DEL GENERO: " << genero << endl;
    for (int i = 0; i < peliculas.size(); i++)
    {
        if (strcmp(peliculas[i].genero, genero) == 0)
        {
            cout << "- " << peliculas[i].titulo << " (" << peliculas[i].anio_estreno << ")" << endl;
        }
    }
}

void BuscarPorDirector(vector<Pelicula> peliculas, char director[])
{
    cout << "\nPELICULAS DEL DIRECTOR: " << director << endl;
    for (int i = 0; i < peliculas.size(); i++)
    {
        if (strcmp(peliculas[i].director, director) == 0)
        {
            cout << "- " << peliculas[i].titulo << " (" << peliculas[i].anio_estreno << ")" << endl;
        }
    }
}
