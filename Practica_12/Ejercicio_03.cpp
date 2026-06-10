// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verástegui
// Fecha creación: 26/05/2026
// Número de ejercicio: 3

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct DatosEstudiante
{
    char nombre[30];
    int edad;
    float promedio;
};

void RegistrarEstudiantes();
void LeerEstudiantes();

int main()
{
    system("cls");
    RegistrarEstudiantes();
    LeerEstudiantes();
    return 0;
}

void RegistrarEstudiantes()
{
    ofstream archivo;
    int n = 0;
    DatosEstudiante estudiante;
    archivo.open("estudiantes.txt", ios::app);
    if (archivo.good())
    {
        cout << "Ingrese la cantidad de estudiantes a registrar: ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin.ignore();
            cout << "Ingrese el nombre: ";
            cin.getline(estudiante.nombre, 30);
            cout << "Ingrese la edad: ";
            cin >> estudiante.edad;
            cout << "Ingrese el promedio: ";
            cin >> estudiante.promedio;
            
            archivo << "Nombre: " << estudiante.nombre << endl;
            archivo << "Edad: " << estudiante.edad << endl;
            archivo << "Promedio: " << estudiante.promedio << endl;
        }
        archivo.close();
    }
}

void LeerEstudiantes()
{
    ifstream archivo;
    string lineaTexto;
    archivo.open("estudiantes.txt", ios::in);
    if (archivo.good())
    {
        cout << "\nInformacion de estudiantes:" << endl;
        while (getline(archivo, lineaTexto))
        {
            cout << lineaTexto << endl;
        }
        archivo.close();
    }
}
