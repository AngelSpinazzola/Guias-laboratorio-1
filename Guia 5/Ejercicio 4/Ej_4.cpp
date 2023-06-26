/**Una empresa transporta encomiendas entre Buenos Aires y Mendoza. Por cada encomienda se cobra un importe de acuerdo al peso de la misma, con la siguiente escala:
Kilos		Importe
<= 10		     A
>10 y <=40	     B
>40		     C

Los camiones utilizados transportan un máximo de 200 kilos y son cargados a medida que llegan las encomiendas,
partiendo en el momento en que una encomienda no puede ser cargada en el camión por exceder los 200 kilos y se procede a colocar en otro camión que así comienza a ser cargado.
Los camiones a medida que se cargan se identifican con un número, partiendo del número uno (1). Confeccionar un programa para que:
a) Ingrese los valores de los tres importes A, B y C.
b) Ingrese el peso de cada encomienda. Para finalizar la carga de datos se ingresa una encomienda "ficticia", con peso negativo.
c) Por cada encomienda despachada se informe la siguiente información:
Nro. de Camión, Kg. Transportados e  Importe Cobrado
d) Informar la cantidad total de camiones y el total facturado.

*/
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    float peso;
    float importeA, importeB, importeC, encomiendaActual;
    int contCamiones=0;
    float totalImporteFacturado=0;

    cout << "Ingrese los valores de los 3 importes" << endl;
    cout << "IMPORTE A (<=10KG): ";
    cin >> importeA;
    cout << "IMPORTE B (>10 y <=40KG): ";
    cin >> importeB;
    cout << "IMPORTE C (>40): ";
    cin >> importeC;

    cout << "Ingrese el peso de la encomienda: ";
    cin >> peso;

    while(peso > 0)
    {
        contCamiones++;
        encomiendaActual = 0;
        while(peso+encomiendaActual <= 200)
        {
            encomiendaActual+=peso;

            if(encomiendaActual != 200)
            {
                cout << "Ingrese el peso de la encomienda: ";
                cin >> peso;
            }
        }

        cout << "Sale el camion numero: " << contCamiones << endl;
        cout << "Con el peso de: " << encomiendaActual << endl;
        if(encomiendaActual <= 10)
        {
            cout << "Con el precio de: " << importeA << endl;
            totalImporteFacturado+=importeA;
        }
        else
        {
            if(encomiendaActual > 10 && encomiendaActual <=40)
            {
                cout << "Con el precio de: " << importeB << endl;
                totalImporteFacturado+=importeB;
            }
            else
            {
                cout << "Con el precio de: " << importeC << endl;
                totalImporteFacturado+=importeC;
            }
        }
        cout << "Ingrese el peso de la encomienda: ";
        cin >> peso;
    }

    cout << "Cantidad total de camiones: " << contCamiones << " total facturado $" << totalImporteFacturado << endl;

    return 0;
}
