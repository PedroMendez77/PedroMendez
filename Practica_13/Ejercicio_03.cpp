// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>

using namespace std;

struct Estudiante
{
    int cedula;
    char nombre[40];
    char apellido[40];
    int edad;
    char profesion[40];
    char lugar_nacimiento[40];
    char direccion[50];
    int telefono;
};

void IngresarEstudiantes(vector<Estudiante> &estudiantes, int n);
void MostrarEstudiantes(vector<Estudiante> estudiantes);

int main()
{
    int n;
    vector<Estudiante> estudiantes;
    system("cls");
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;
    IngresarEstudiantes(estudiantes, n);
    MostrarEstudiantes(estudiantes);
    return 0;
}

void IngresarEstudiantes(vector<Estudiante> &estudiantes, int n)
{
    Estudiante e;
    for (int i = 0; i < n; i++)
    {
        cout << "\nESTUDIANTE " << i + 1 << endl;
        cout << "Cedula: ";
        cin >> e.cedula;
        cin.ignore();
        cout << "Nombre: ";
        cin.getline(e.nombre, 40);
        cout << "Apellido: ";
        cin.getline(e.apellido, 40);
        cout << "Edad: ";
        cin >> e.edad;
        cin.ignore();
        cout << "Profesion: ";
        cin.getline(e.profesion, 40);
        cout << "Lugar de nacimiento: ";
        cin.getline(e.lugar_nacimiento, 40);
        cout << "Direccion: ";
        cin.getline(e.direccion, 50);
        cout << "Telefono: ";
        cin >> e.telefono;
        estudiantes.push_back(e);
    }
}

void MostrarEstudiantes(vector<Estudiante> estudiantes)
{
    cout << "\nLISTADO DE ESTUDIANTES" << endl;
    for (int i = 0; i < estudiantes.size(); i++)
    {
        cout << "\n-----------------------" << endl;
        cout << "Cedula: " << estudiantes[i].cedula << endl;
        cout << "Nombre: " << estudiantes[i].nombre << " " << estudiantes[i].apellido << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Profesion: " << estudiantes[i].profesion << endl;
        cout << "Lugar de nacimiento: " << estudiantes[i].lugar_nacimiento << endl;
        cout << "Direccion: " << estudiantes[i].direccion << endl;
        cout << "Telefono: " << estudiantes[i].telefono << endl;
    }
}
