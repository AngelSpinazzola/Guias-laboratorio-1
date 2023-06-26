/**Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registró el número de venta, el número de día y el importe de la venta.
El fin de la carga de datos se indica con número de venta igual a 0.
Se pide calcular e informar:
Por cada día, la recaudación total (sólo de aquellos días que tuvieron recaudación).
El número de día que más se recaudó en total y cuál fue la recaudación máxima.
*/
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    //DATOS ESTRUCTURA PRINCIPAL
    const int DIAS = 30;
    int numVenta, dia, i, importe;
    float importeVenta[DIAS]={};

    //ESTRUCTURA PRINCIPAL
    cout << "Ingresar número de venta: ";
    cin >> numVenta;

    while(numVenta != 0)
    {
        cout << "Ingresar número de dia: ";
        cin >> dia;
        cout << "Ingresar importe de venta: ";
        cin >> importe;

        importeVenta[dia-1]+=importe;

        cout << "Ingresar número de venta: ";
        cin >> numVenta;
    }
    //DATOS PUNTO B
    int numDiaMayorRec;
    float recaudacionMaxima;

    for(i=0; i<DIAS; i++)
    {
        if(importeVenta[i] > 0)
        {
            cout << "PUNTO A) Para el día: #" << i+1 << " la recaudación total fue: $" << importeVenta[i] << endl;
        }
        if(i==0 && importeVenta[i] > 0)
        {
            numDiaMayorRec = i+1;
            recaudacionMaxima = importeVenta[i];
        }
        else if(importeVenta[i] > recaudacionMaxima)
        {
            numDiaMayorRec = i+1;
            recaudacionMaxima = importeVenta[i];
        }
    }
    //MUESTRO PUNTO B
    cout << "PUNTO B) El número de día que más se recaudó en total es: #" << numDiaMayorRec << " y la recaudación total máxima fue de: $" << recaudacionMaxima << endl;

    return 0;
}
