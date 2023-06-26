/**LaraRaffle es el sorteo más importante de Argentina. Se dispone de 100 números entre el 0 y el 99 que los participantes pueden elegir para su compra. Cada número tiene un costo de $500.
Entrega un premio al ganador de $30000 y al segundo ganador de $5000.
Nos solicitan un programa que permita cargar los números comprados por los participantes.
El programa no debe permitir comprar más de una vez un número ya vendido. El fin de carga de información se indica con número igual a -1.

Luego, sortear dos números al azar entre 0 y 99 e informar:
Total recaudado en concepto de compra de números.
Ganancia neta o pérdida del Sr Lara.
El porcentaje de números no vendidos con respecto al total.
Número ganador del primer premio y número ganador del segundo premio (no pueden ser el mismo número). E indicar si esos números se vendieron o no.
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

    cout << "Ingresar el número que desee comprar (Entre 0 y el 99): ";
    cin >> numero;


    while(numero != -1)
    {

        if(numero >= 0 && numero <= 99 && vectorNumeros[numero] == false)
        {
            vectorNumeros[numero]=true;
        }
        cout << "Ingresar el número que desee comprar (Entre 0 y el 99): ";
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

    cout << "PUNTO A) Total recaudado en concepto de compra de números: " << totalRecaudado << "$" << endl;
    //
    porcentajeNoVendidos = (porcentajeNoVendidos * 100) / (totalRecaudado / 500 + porcentajeNoVendidos);
    cout << fixed << setprecision(2) << "PUNTO C) Porcentaje de números no vendidos respecto al total: " << porcentajeNoVendidos << "%" << endl;
    //
    cout << "PUNTO D) Número ganador del primer premio: #" << numPrimerGanador << endl;
    cout << "PUNTO D) Número ganador del segundo premio: #" << numSegundoGanador << endl;
    for(int i=0; i<NUMEROS; i++)
    {
        if(vectorNumeros[i] == true)
        {
            if(i == numPrimerGanador)
            {
                cout << "PUNTO D) El número #" << i << " se vendió." << endl;
                totalRecaudado-=30000;
            }
            if(i == numSegundoGanador)
            {
                cout << "PUNTO D) El número #" << i << " se vendió." << endl;
                totalRecaudado-=5000;
            }
        }
    }
    //
    cout << "PUNTO B) Ganancia neta de Sr Lara: " << totalRecaudado << "$" << endl;

    return 0;
}
