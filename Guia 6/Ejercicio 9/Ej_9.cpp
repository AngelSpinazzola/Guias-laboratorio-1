/**Una fábrica tiene 80 empleados, y dispone de un primer lote de registros con la siguiente información:
- Nro. empleado (1 a 80)
- Valor de una hora de trabajo
- Valor de la hora extra de trabajo

A fin de mes se desean calcular los sueldos de los empleados que trabajaron y para ello se cuenta con un segundo lote de registros con la siguiente información:
- Nro. empleado (1 a 80)
- Día
- Total de horas trabajadas en el día

Este lote finaliza con un registro con nro. de empleado igual a cero, y sólo figuran los registros de los empleados que trabajaron durante el mes.
Calcular e informar el sueldo de cada uno de los empleados, teniendo en cuenta que a partir de la 9na hora del día se comienza a pagar como hora extra.
*/

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    //DATOS ESTRUCTURA PRINCIPAL
    int nroEmpleado, dia, horasTrabajadas;
    float valorHora, valorHoraExtra;
    //DATOS PARA EL PUNTO A
    const int EMPLEADOS = 80;
    const int VALORES_DE_TRABAJO = 2;
    const int DIAS = 30;
    int matrizValoresDeTrabajo[VALORES_DE_TRABAJO][EMPLEADOS]= {};
    int matrizHorasTrabajadas[DIAS][EMPLEADOS]= {};


    //ESTRUCTURA PRINCIPAL ( PRIMER LOTE )
    for(int i=0; i<10; i++)
    {
        cout << "Ingresar nro. de empleado (1 a 80): ";
        cin >> nroEmpleado;
        cout << "Ingresar valor de una hora de trabajo: ";
        cin >> valorHora;
        cout << "Ingresar valor de una hora extra de trabajo: ";
        cin >> valorHoraExtra;

        //GUARDO EN LA FILA 0, COLUMNA EMPLEADO, DENTRO DE LA MATRIZ EL VALOR DE HORA DISCRIMINADO POR EMPLEADO
        matrizValoresDeTrabajo[0][nroEmpleado-1] = valorHora;
        //GUARDO EN LA FILA 1, COLUMNA EMPLEADO, DENTRO DE LA MATRIZ EL VALOR DE HORA EXTRA DISCRIMINADO POR EMPLEADO
        matrizValoresDeTrabajo[1][nroEmpleado-1] = valorHoraExtra;

    }
    //REGISTRO DE SEGUNDO LOTE
    cout << "Ingresar nro. de empleado (1 a 80): ";
    cin >> nroEmpleado;
    while(nroEmpleado != 0)
    {
        cout << "Ingresar dia: ";
        cin >> dia;
        cout << "Ingresar total horas trabajadas en el dia: ";
        cin >> horasTrabajadas;

        //GUARDO LOS DATOS EN MATRIZ DE LAS HORAS TRABAJADAS POR (FILA DIA) Y (EMPLEADO POR COLUMNA).
        matrizHorasTrabajadas[dia-1][nroEmpleado-1] = horasTrabajadas;

        cout << "Ingresar nro. de empleado (1 a 80): ";
        cin >> nroEmpleado;
    }
    //FIN ESTRUCTURA PRINCIPAL
    //MUESTRO PUNTO A RESOLVER ( EN LA MATRIZ C = COLUMNA Y F = FILA )
    int sueldo, horas, horasExtras;
    for(int c=0; c<EMPLEADOS; c++)
    {
        sueldo = 0;

        for(int f=0; f<DIAS; f++)
        {
            horas = 0;
            horasExtras = 0;
            if(matrizHorasTrabajadas[f][c] > 8)
            {
                horasExtras = matrizHorasTrabajadas[f][c] - 8;
            }
            else if(matrizHorasTrabajadas[f][c] > 0)
            {
                horas = matrizHorasTrabajadas[f][c];
            }
            //
            if(horas > 0)
            {
                sueldo = sueldo + (horas * matrizValoresDeTrabajo[0][c]);
                if(horasExtras > 0)
                {
                    sueldo = sueldo + (horasExtras * matrizValoresDeTrabajo[1][c]);
                }
            }

        }
        if(sueldo > 0)
        {
            cout << endl << "Para el empleado #" << c+1 << " su sueldo es: " << sueldo << "$ " << endl;
        }
    }

    return 0;
}
