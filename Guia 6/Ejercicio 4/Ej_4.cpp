/**Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registr� el n�mero de venta, el n�mero de d�a y el importe de la venta.
El fin de la carga de datos se indica con n�mero de venta igual a 0.
Se pide calcular e informar:
Por cada d�a, la recaudaci�n total (s�lo de aquellos d�as que tuvieron recaudaci�n).
El n�mero de d�a que m�s se recaud� en total y cu�l fue la recaudaci�n m�xima.
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
    cout << "Ingresar n�mero de venta: ";
    cin >> numVenta;

    while(numVenta != 0)
    {
        cout << "Ingresar n�mero de dia: ";
        cin >> dia;
        cout << "Ingresar importe de venta: ";
        cin >> importe;

        importeVenta[dia-1]+=importe;

        cout << "Ingresar n�mero de venta: ";
        cin >> numVenta;
    }
    //DATOS PUNTO B
    int numDiaMayorRec;
    float recaudacionMaxima;

    for(i=0; i<DIAS; i++)
    {
        if(importeVenta[i] > 0)
        {
            cout << "PUNTO A) Para el d�a: #" << i+1 << " la recaudaci�n total fue: $" << importeVenta[i] << endl;
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
    cout << "PUNTO B) El n�mero de d�a que m�s se recaud� en total es: #" << numDiaMayorRec << " y la recaudaci�n total m�xima fue de: $" << recaudacionMaxima << endl;

    return 0;
}
