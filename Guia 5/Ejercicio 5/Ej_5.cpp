#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    //DATOS ESTRUCTURA PRINCIPAL
    const int COMANDAS = 10;
    int i, numeroMozo, numeroComanda, tipoPlato;
    float importe;
    //DATOS PUNTO A
    int cantPlatosTipo1, cantPlatosTipo2, cantPlatosTipo3;
    //DATOS PUNTO B
    int platoPrincipalMenorImporte, numMozoPuntoB;
    bool primerPlatoPrincipal = true;
    //DATOS PUNTO C
    float acuImporteComandas;


    cout << "Número de mozo: ";
    cin >> numeroMozo;

    //ESTRUCTURA PRINCIPAL
    while(numeroMozo >= 0)
    {

        //RE-INICIALIZO VARIABLES PARA PUNTO A
        cantPlatosTipo1=0;
        cantPlatosTipo2=0;
        cantPlatosTipo3=0;
        //RE-INICIALIZO VARIABLE PUNTO C
        acuImporteComandas=0;


        for(i=1; i<=COMANDAS; i++)
        {
            cout << "Número de comanda: ";
            cin >> numeroComanda;
            cout << "Tipo de plato (1 - Entrada, 2 - Plato Principal, 3 - Postre): ";
            cin >> tipoPlato;
            cout << "Importe: $";
            cin >> importe;

            //RESUELVO PUNTO A
            switch(tipoPlato)
            {
            case 1:
                cantPlatosTipo1++;
                break;

            case 2:
                cantPlatosTipo2++;
                break;

            case 3:
                cantPlatosTipo3++;
                break;
            }
            //RESUELVO PUNTO B
            if(primerPlatoPrincipal == true && tipoPlato == 2)
            {
                primerPlatoPrincipal = false;
                platoPrincipalMenorImporte = importe;
                numMozoPuntoB = numeroMozo;
            }
            else if(tipoPlato == 2 && importe < platoPrincipalMenorImporte)
            {
                platoPrincipalMenorImporte = importe;
                numMozoPuntoB = numeroMozo;
            }
            //RESUELVO PUNTO C
            acuImporteComandas+=importe;


        }
        //MUESTRO PUNTO A
        cout << "PUNTO A)Para el mozo: #" << numeroMozo << " la cantidad de platos de cada tipo fue" << endl;
        cout << "PUNTO A) 1 - Entrada: " << cantPlatosTipo1 << endl;
        cout << "PUNTO A) 2 - Plato principal: " << cantPlatosTipo2 << endl;
        cout << "PUNTO A) 3 - Postre: " << cantPlatosTipo3 << endl;
        //MUESTRO PUNTO C
        acuImporteComandas = acuImporteComandas / COMANDAS;
        cout << "El importe promedio por comanda es: " << acuImporteComandas << endl;


        cout << "Número de mozo: ";
        cin >> numeroMozo;

    }
    //FIN ESTRUCTURA PRINCIPAL
    //MUESTRO PUNTO B
    cout << "El número de mozo que atendio el plato principal de menor importe es: #" << numMozoPuntoB << endl;


    return 0;
}
