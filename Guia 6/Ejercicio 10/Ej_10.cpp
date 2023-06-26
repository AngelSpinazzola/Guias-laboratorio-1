/**LaraRaffle es el sorteo m�s importante de Argentina. Se dispone de 100 n�meros entre el 0 y el 99 que los participantes pueden elegir para su compra. Cada n�mero tiene un costo de $500.
Entrega un premio al ganador de $30000 y al segundo ganador de $5000.
Nos solicitan un programa que permita cargar los n�meros comprados por los participantes.
El programa no debe permitir comprar m�s de una vez un n�mero ya vendido. El fin de carga de informaci�n se indica con n�mero igual a -1.

Luego, sortear dos n�meros al azar entre 0 y 99 e informar:
Total recaudado en concepto de compra de n�meros.
Ganancia neta o p�rdida del Sr Lara.
El porcentaje de n�meros no vendidos con respecto al total.
N�mero ganador del primer premio y n�mero ganador del segundo premio (no pueden ser el mismo n�mero). E indicar si esos n�meros se vendieron o no.
*/

#include <iostream>
#include <clocale>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");
    srand(time(NULL));

    const int NUMEROS = 10;
    int numero, numPrimerGanador, numSegundoGanador;
    bool bandera=false, vectorNumeros[NUMEROS]= {};
    float totalRecaudado=0;
    float porcentajeNoVendidos=0;

    cout << "Ingresar el n�mero que desee comprar (Entre 0 y el 99): ";
    cin >> numero;


    while(numero != -1)
    {

        if(numero >= 0 && numero <= 99 && vectorNumeros[numero] == false)
        {
            vectorNumeros[numero]=true;
        }
        cout << "Ingresar el n�mero que desee comprar (Entre 0 y el 99): ";
        cin >> numero;
    }
    //RESUELVO PUNTO A Y B
    for(int i=0; i<NUMEROS; i++)
    {
        if(vectorNumeros[i] == true)
        {
            totalRecaudado+=500;
        }
        else
        {
            porcentajeNoVendidos++;
        }
    }
    while(bandera == false)
    {
        numPrimerGanador = numero=rand()%11;
        numSegundoGanador = numero=rand()%11;

        if(numPrimerGanador != numSegundoGanador)
        {
            bandera = true;
        }
    }

    cout << "PUNTO A) Total recaudado en concepto de compra de n�meros: " << totalRecaudado << "$" << endl;
    //
    porcentajeNoVendidos = (porcentajeNoVendidos * 100) / (totalRecaudado / 500 + porcentajeNoVendidos);
    cout << fixed << setprecision(2) << "PUNTO C) Porcentaje de n�meros no vendidos respecto al total: " << porcentajeNoVendidos << "%" << endl;
    //
    cout << "PUNTO D) N�mero ganador del primer premio: #" << numPrimerGanador << endl;
    cout << "PUNTO D) N�mero ganador del segundo premio: #" << numSegundoGanador << endl;
    for(int i=0; i<NUMEROS; i++)
    {
        if(vectorNumeros[i] == true)
        {
            if(i == numPrimerGanador)
            {
                cout << "PUNTO D) El n�mero #" << i << " se vendi�." << endl;
                totalRecaudado-=30000;
            }
            if(i == numSegundoGanador)
            {
                cout << "PUNTO D) El n�mero #" << i << " se vendi�." << endl;
                totalRecaudado-=5000;
            }
        }
    }
    //
    cout << "PUNTO B) Ganancia neta de Sr Lara: " << totalRecaudado << "$" << endl;

    return 0;
}
