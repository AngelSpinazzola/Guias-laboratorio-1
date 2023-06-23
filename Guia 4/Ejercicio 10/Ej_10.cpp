/**El festival Larapalooza, el mejor festival musical del mundo, brindar� una serie de conciertos distribuidos en tres jornadas distintas. Se desea un programa que registre los artistas que participar�n. Por cada artista se registr�:
N�mero de artista (entero)
Integrantes (entero)
Jornada (1, 2 o 3)
Duraci�n del show en minutos (entero)

La informaci�n no se encuentra ordenada bajo ning�n criterio. La carga de datos se finaliza con un n�mero de artista igual a cero. Calcular e informar:
El n�mero de artista que realice el show m�s largo de la jornada 1.
La cantidad de solistas (artistas de 1 integrante) que participaron en cada una de las jornadas. (se muestran tres resultados).
La jornada m�s extensa (en minutos).
Duraci�n promedio de show por artista (se muestra un resultado).
*/

#include <iostream>
#include <clocale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    ///Carga de datos
    int numArtista, jornada, integrantes, duracionShow;
    ///PUNTO A
    int numArtistaMayorShow, duracionMayorShow;
    bool primerShow=true;
    ///PUNTO B
    int cantSolistasJornada1=0, cantSolistasJornada2=0, cantSolistasJornada3=0;
    ///PUNTO C
    int minutosJornada1=0, minutosJornada2=0, minutosJornada3=0;
    ///PUNTO D
    float promedio;
    int cont_artista=0, duracionPromedio=0;

    cout << "Numero de artista: ";
    cin >> numArtista;

    while(numArtista != 0)
    {
        cout << "Integrantes: ";
        cin >> integrantes;
        cout << "Jornada: ";
        cin >> jornada;
        cout << "Duraci�n de show: ";
        cin >> duracionShow;

        duracionPromedio+=duracionShow;
        cont_artista++;

        switch(jornada)
        {
        case 1:
            if(primerShow == true)
            {
                primerShow = false;
                numArtistaMayorShow = numArtista;
                duracionMayorShow = duracionShow;
            }
            else if(duracionShow > duracionMayorShow)
            {
                numArtistaMayorShow = numArtista;
                duracionMayorShow = duracionShow;
            }
            if(integrantes == 1)
            {
                cantSolistasJornada1++;
            }
            minutosJornada1+=duracionShow;
            break;

        case 2:
            if(integrantes == 1)
            {
                cantSolistasJornada2++;
            }
            minutosJornada2+=duracionShow;
            break;


        case 3:
            if(integrantes == 1)
            {
                cantSolistasJornada3++;
            }
            minutosJornada3+=duracionShow;
            break;

        }

        cout << "Numero de artista: ";
        cin >> numArtista;
    }

    cout << "----------------------------------------------------------------------";
    ///PUNTO A
    cout << endl << "El n�mero de artiste que realizo el show mas largo de la jornada 1: " << numArtistaMayorShow << endl;
    ///PUNTO B
    cout << "Cantidad de solistas para jornada 1: " << cantSolistasJornada1 << endl;
    cout << "Cantidad de solistas para jornada 2: " << cantSolistasJornada2 << endl;
    cout << "Cantidad de solistas para jornada 3: " << cantSolistasJornada3 << endl;
    ///PUNTO C
    if(minutosJornada1 > minutosJornada2 && minutosJornada1 > minutosJornada3)
    {
        cout << "La jornada m�s extensa fue la 1 con " << minutosJornada1 << " minutos." << endl;
    }
    else{
        if(minutosJornada2 > minutosJornada1 && minutosJornada2 > minutosJornada3)
        {
            cout << "La jornada m�s extensa fue la 2 con " << minutosJornada2 << " minutos." << endl;
        }
        else
        {
            cout << "La jornada m�s extensa fue la 3 con " << minutosJornada3 << " minutos." << endl;
        }
    }
    ///PUNTO D
    promedio = (float) duracionPromedio / cont_artista;
    cout << "La duraci�n promedio de show por artista es: " << promedio << endl;

    return 0;
}
