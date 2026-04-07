// Materia: Programación I, Paralelo 4
// Autor: Pedro Enrique Méndez Verastegui
// Fecha creación: 31/03/2026
// Número de ejercicio: 6

#include <iostream>

using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos);

int main()
{
    system("cls");
    int seg_t, h, m, s;
    cout << "Segundos: ";
    cin >> seg_t;

    calcularTiempo(seg_t, h, m, s);

    cout << h << "h " << m << "m " << s << "s" << endl;

    return 0;
}

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos)
{
    horas = totalSegundos / 3600;
    totalSegundos %= 3600;
    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;
}
