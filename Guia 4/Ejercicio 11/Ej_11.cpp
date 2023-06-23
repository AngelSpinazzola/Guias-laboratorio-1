/**El teatro Lara Rex presentar� la obra "Ojo que se viene el primer parcial" en una �nica jornada. El mismo cuenta con 1200 butacas a un costo de $5000.
Se pide un programa para poder ingresar todos los tickets vendidos para esta presentaci�n. Por cada venta se registr�:
N�mero de venta
Cantidad de butacas

La venta de tickets se finaliza con un n�mero de venta igual a cero o bien cuando no se dispongan de m�s butacas para vender.
Se pide calcular e informar:
El total recaudado.
La cantidad de butacas que quedaron sin vender.
*/

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numVenta, cantButacas, butacasDisponibles=1200, totalRec=0;

    cout << "Numero de venta: ";
    cin >> numVenta;

    while(numVenta != 0 && butacasDisponibles > 0)
    {
        cout << "Cantidad de butacas: ";
        cin >> cantButacas;
        totalRec+=cantButacas;
        butacasDisponibles-=cantButacas;

        if(butacasDisponibles > 0)
        {
            cout << "Numero de venta: ";
            cin >> numVenta;
        }
    }

    totalRec = totalRec * 5000;
    cout << "Total recaudado: " << totalRec;

    return 0;
}
