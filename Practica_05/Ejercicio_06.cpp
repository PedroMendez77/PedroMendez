// Materia: Programacion I, Paralelo 4
// Autor: Pedro Enrique Mendez Verastegui
// Carnet: 9230605
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creacion: 09/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int CalcularPagoMaterias(int);

int main()
{
    int n_estudiantes = 0;
    int carrera = 0, semestre = 0, materias = 0;
    
    int cont_sist = 0, cont_dis = 0, cont_meca = 0, cont_inno = 0;
    int cont_sem2 = 0, cont_sem3 = 0, cont_sem4 = 0, cont_sem5 = 0;
    int total_recaudado = 0;

    srand(time(NULL));
    system("cls");

    cout << "--- INSCRIPCIONES UCB 1-2026 ---" << endl;
    cout << "Cantidad de estudiantes a inscribir: ";
    cin >> n_estudiantes;

    for (int i = 1; i <= n_estudiantes; i++)
    {
        carrera = (rand() % 4) + 1;
        semestre = (rand() % (5 - 2 + 1)) + 2;
        materias = (rand() % (6 - 3 + 1)) + 3;

        switch (carrera)
        {
            case 1: cont_sist++; break;
            case 2: cont_dis++; break;
            case 3: cont_meca++; break;
            case 4: cont_inno++; break;
        }

        switch (semestre)
        {
            case 2: cont_sem2 += materias; break;
            case 3: cont_sem3 += materias; break;
            case 4: cont_sem4 += materias; break;
            case 5: cont_sem5 += materias; break;
        }

        total_recaudado += CalcularPagoMaterias(materias);
    }

    system("cls");
    cout << "--- REPORTES DE INSCRIPCION ---" << endl;
    cout << "1. Estudiantes por Carrera:" << endl;
    cout << "   Ingenieria de Sistemas: " << cont_sist << endl;
    cout << "   Diseno Digital: " << cont_dis << endl;
    cout << "   Ingenieria Mecatronica: " << cont_meca << endl;
    cout << "   Ing. e Innovacion Empresarial: " << cont_inno << endl;
    
    cout << "\n2. Materias tomadas por Nivel:" << endl;
    cout << "   2do Semestre: " << cont_sem2 << " materias" << endl;
    cout << "   3er Semestre: " << cont_sem3 << " materias" << endl;
    cout << "   4to Semestre: " << cont_sem4 << " materias" << endl;
    cout << "   5to Semestre: " << cont_sem5 << " materias" << endl;

    cout << "\n3. Recaudacion Total:" << endl;
    cout << "   " << total_recaudado << " Bs." << endl;

    return 0;
}

int CalcularPagoMaterias(int num_materias)
{
    int pago = 0;
    pago = num_materias * 5 * 525;
    return pago;
}
