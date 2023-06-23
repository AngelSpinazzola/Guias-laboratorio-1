/**Se dispone de la información de los exámenes rendidos por algunos estudiantes de la UTN FRGP. Por cada registro de examen se conoce:
Legajo del estudiante (entero)
Código de materia (entero)
Nota (float)

La finalización de la carga de datos se indica con un legajo de estudiante mayor a 30000.  Calcular e informar:
La nota promedio entre todos los estudiantes.
El legajo del estudiante con menor nota.
La cantidad de exámenes rendidos para la materia 10.
El porcentaje de aprobados y no aprobados.

NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.
*/
#include <iostream>
#include <clocale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int legajo, cod_materia;
    float nota;

    ///PUNTO A
    int cont_estudiantes=0;
    float nota_promedio=0;
    ///PUNTO B
    int legajo_primer_peor_nota, cont_burros=0;
    bool primer_burro=true;
    ///PUNTO C
    int cantidadExamenesMateria10;
    ///PUNTO D
    float aprobados=0, desaprobados=0, porcentajeAprobados, porcentajeDesaprobados;

    cout << "Nota: ";
    cin >> nota;

    while(nota <= 30000)
    {

        ///PUNTO A
        cont_estudiantes++;
        nota_promedio = nota_promedio + nota;

        cout << "Legajo del estudiante: ";
        cin >> legajo;
        cout << "Código de materia: ";
        cin >> cod_materia;

        ///PUNTO B
        if(nota < 6)
        {
            cont_burros++;
            if(primer_burro == true)
            {
                legajo_primer_peor_nota = legajo;
            }
        }
        ///PUNTO C
        if(cod_materia == 10)
        {
            cantidadExamenesMateria10++;
        }
        ///PUNTO D
        if(nota >= 6)
        {
            aprobados++;
        }
        else
        {
            desaprobados++;
        }

        cout << "Nota: ";
        cin >> nota;
    }

    ///PUNTO A
    cout << "Nota promedio entre todos los estudiantes: " << nota_promedio/cont_estudiantes << endl;
    ///PUNTO B
    if(cont_burros < 3)
    {
        cout << "Legajo del estudiante con peor nota: " << legajo_primer_peor_nota << endl;
    }
    else
    {
        cout << "El primer estudiante con la peor nota fue: " << legajo_primer_peor_nota << endl;
    }
    ///PUNTO C
    cout << "Cantidad de examenes rendidos para la materia 10: " << cantidadExamenesMateria10 << endl;
    ///PUNTO D
    porcentajeAprobados = (aprobados * 100) / (desaprobados+aprobados);
    porcentajeDesaprobados = (desaprobados * 100) / (desaprobados+aprobados);
    cout << "Porcentaje de alumnos aprobados: " << fixed << setprecision(2) << porcentajeAprobados << "%" << endl;
    cout << "Porcentaje de alumnos desaprobados: " << fixed << setprecision(2)<< porcentajeDesaprobados << "%" << endl;

    return 0;
}
