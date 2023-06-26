/**La asociaci�n de maratonistas de maratones de verdad (no de series) quiere registrar la informaci�n de las �ltimas 5 maratones que se realizaron en el pa�s. Por cada participante se registr� la siguiente informaci�n:
N�mero de marat�n (entero)
N�mero de participante (entero)
G�nero ('F' - Femenino, 'M' - Masculino, 'X' - Prefiere no indicarlo)
Tiempo (en minutos)
Finaliza (1 - Finaliza, 0 - Abandona)

La informaci�n se encuentra agrupada por n�mero de marat�n. Cada marat�n puede tener una cantidad distinta de participantes.
Para indicar el fin de la carga de datos de una marat�n se ingresa un n�mero de participante negativo.

Se pide calcular e informar:
-   El porcentaje de participantes por g�nero.
- El tiempo promedio (en minutos) entre todos los que hayan finalizado maratones.
- Por cada marat�n, la persona que haya realizado el menor tiempo y haya finalizado la competencia. Indicar el n�mero de participante y el tiempo.
*/
#include <iostream>
#include <clocale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    const int MARATONES = 3;
    //DATOS ESTRUCTURA PRINCIPAL
    int numMaraton, numParticipante, tiempo, i;
    char genero;
    bool finaliza;

    //DATOS PUNTO A
    int total;
    float porcentajeGeneroF=0, porcentajeGeneroM=0, porcentajeGeneroX=0;
    //DATOS PUNTO B
    int acuTiempo=0, contParticipantes=0;
    float promedio;
    //DATOS PUNTO C
    int menorTiempo, numParticipantePuntoC;
    bool primerParticipante;


    //ESTRUCTURA PRINCIPAL
    for(i=0; i<MARATONES; i++)
    {
        //RE-INICIALIZO BANDERA PUNTO C
        primerParticipante = true;

        cout << "Ingresar n�mero de marat�n: ";
        cin >> numMaraton;
        cout << "Ingresar n�mero de participante: ";
        cin >> numParticipante;

        while(numParticipante > 0)
        {
            cout << "Ingresar g�nero ('F' - Femenino, 'M' - Masculino, 'X' - Prefiere no indicarlo): ";
            cin >> genero;
            cout << "Ingresar tiempo (en minutos): ";
            cin >> tiempo;
            cout << "Finaliza (1 - Finaliza, 0 - Abandona): ";
            cin >> finaliza;

            //RESUELVO PUNTO A
            switch(genero)
            {
            case 'F':
                porcentajeGeneroF++;
                break;

            case 'M':
                porcentajeGeneroM++;
                break;

            case 'X':
                porcentajeGeneroX++;
                break;
            }
            if(finaliza == 1){
                acuTiempo+=tiempo;
                contParticipantes++;
            }
            //RESUELVO PUNTO C
            if(primerParticipante == true && finaliza == 1){
                primerParticipante = false;
                menorTiempo = tiempo;
                numParticipantePuntoC = numParticipante;
            }
            else if(finaliza == 1 && tiempo < menorTiempo){
                menorTiempo = tiempo;
                numParticipantePuntoC = numParticipante;
            }


            cout << "Ingresar n�mero de participante: ";
            cin >> numParticipante;
        }
        //MUESTRO PUNTO C
        cout << endl << "Para la marat�n #" << numMaraton << " el n�mero de participante que finalizo la competencia en menor tiempo es: #" << numParticipantePuntoC << " y su tiempo fue: " << menorTiempo << endl;
    }
    //MUESTRO PUNTO A
    total = porcentajeGeneroF + porcentajeGeneroM + porcentajeGeneroX;
    porcentajeGeneroF = (porcentajeGeneroF * 100) / total;
    porcentajeGeneroM = (porcentajeGeneroM * 100) / total;
    porcentajeGeneroX = (porcentajeGeneroX * 100) / total;
    cout << endl << "Porcentaje de participantes por g�nero" << fixed << setprecision(2) << endl;
    cout << "Femenino: " << porcentajeGeneroF << "%" << endl;
    cout << "Masculino: " << porcentajeGeneroM << "%" << endl;
    cout << "X: " << porcentajeGeneroX << "%" << endl;
    //MUESTRO PUNTO B
    promedio = acuTiempo / contParticipantes;
    cout << endl << fixed << setprecision(1) << "El tiempo promedio (en minutos) entre todos los que hayan finalizado maratones es: " << promedio << " minutos. " << endl;

    return 0;
}
