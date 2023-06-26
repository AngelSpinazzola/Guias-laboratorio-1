/**Hacer un programa que le pida al usuario una lista de 10 números enteros y -
luego de ingresarlos muestre cuáles de ellos fueron positivos.*/

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    const int ALUMNOS = 2;
    const int NOTAS = 3;
    int matrizNotaPorAlumno[ALUMNOS][NOTAS]= {};

    int i, x;
    //CARGO NOTAS
    for(i=0; i<=ALUMNOS; i++)
    {
        cout << "Ingresar la nota del alumno #" << i+1 << endl;
        for(x=0; x<=NOTAS; x++)
        {
            cout << "Nota #" << x+1 << ": ";
            cin >> matrizNotaPorAlumno[i][x];
        }
    }

    float promedioLimpio;
    for(i=0; i<=ALUMNOS; i++)
    {
        promedioLimpio = 0;
        for(x=0; x<=NOTAS; x++)
        {
            promedioLimpio = promedioLimpio + matrizNotaPorAlumno[i][x];
        }
        promedioLimpio = promedioLimpio / 4;
        if(promedioLimpio >= 7)
        {
            cout << "El alumno #" << i+1 << " aprobo con nota promedio de: " << promedioLimpio << endl;
        }
    }


    //MUESTRO NOTAS


    return 0;
}
