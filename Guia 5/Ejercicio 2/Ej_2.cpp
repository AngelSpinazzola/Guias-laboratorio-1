/***Un banco tiene tres sucursales, ubicadas en las siguientes localidades:
- Sucursal 1: Virreyes
- Sucursal 2: San Fernando
- Sucursal 3: Tigre

En cada una de ellas se registra para cada transacción que realiza un cliente, los siguientes datos:
- Nro. de Cliente (100 al 1200)
- Nro. de Sucursal (1, 2 ó 3)
- Código de Transacción (‘D’ para depósitos, ‘E’ para extracciones)
- Monto en pesos de la transacción

El último registro se indica con nro. de cliente igual a cero. Se pide a partir de estos datos, determinar e informar:
a) Cantidad de depósitos por más de $1000.-.
b) El nro. de cliente que hizo la extracción por mayor monto, y en que sucursal la hizo.
c) El porcentaje de transacciones realizadas en cada una de las sucursales, respecto al total de las mismas.
d) Total de pesos depositados en cada una de las sucursales.
e) Cantidad de depósitos en la sucursal de Tigre.
f) El nro. de sucursal que recibió más cantidad de depósitos (sin importar el monto de los mismos).
**/


#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int nroCliente, nroSucursal;
    char codTransaccion;
    float montoEnPesos;

    ///A
    int cantDepositosMax1000=0;
    ///B
    int nroClienteMayorExtraccion, sucursalMayorExtraccion;
    float montoMayorExtraccion;
    bool primerExtraccion = true;
    ///C
    int contTransaccionesSuc1=0, contTransaccionesSuc2=0, contTransaccionesSuc3=0;
    float porcentajeSuc1, porcentajeSuc2, porcentajeSuc3;
    ///D
    int totalPesosDepSuc1=0, totalPesosDepSuc2=0, totalPesosDepSuc3=0;
    ///E
    int cantDepSucTigre=0;
    ///F
    int cantDepSuc1=0, cantDepSuc2=0;


    cout << "Número de cliente (100 al 1200): ";
    cin >> nroCliente;

    while(nroCliente != 0)
    {
        cout << "Número de sucursal (1,2 ó 3): ";
        cin >> nroSucursal;
        cout << "Código de transacción ('D' para depósitos, 'E' para extracciones)";
        cin >> codTransaccion;
        cout << "Monto en pesos: ";
        cin >> montoEnPesos;

        if(codTransaccion == 'D')
        {
            cantDepositosMax1000++;
        }
        if(primerExtraccion == true && codTransaccion == 'E')
        {
            primerExtraccion = false;
            nroClienteMayorExtraccion = nroCliente;
            montoMayorExtraccion = montoEnPesos;
            sucursalMayorExtraccion = nroSucursal;
        }
        else if(montoEnPesos > montoMayorExtraccion && codTransaccion == 'E')
        {
            nroClienteMayorExtraccion = nroCliente;
            montoMayorExtraccion = montoEnPesos;
            sucursalMayorExtraccion = nroSucursal;
        }

        switch(nroSucursal)
        {
        case 1:
            contTransaccionesSuc1++;
            if(codTransaccion == 'D')
            {
                totalPesosDepSuc1+=montoEnPesos;
                cantDepSuc1++;
            }
            break;

        case 2:
            contTransaccionesSuc2++;
            if(codTransaccion == 'D')
            {
                totalPesosDepSuc2+=montoEnPesos;
                cantDepSuc2++;
            }
            break;

        case 3:
            contTransaccionesSuc3++;
            if(codTransaccion == 'D')
            {
                totalPesosDepSuc3+=montoEnPesos;
                cantDepSucTigre++;
            }
            break;
        }

        cout << "Número de cliente(100 al 1200): ";
        cin >> nroCliente;
    }

    ///A
    cout << "Cantidad de depósitos por más de $1000: " << cantDepositosMax1000 << endl;
    ///B
    cout << "El numero de cliente que hizo la mayor extracción es: " << nroClienteMayorExtraccion << " y la sucursal fue: #" << sucursalMayorExtraccion << endl;
    ///C
    porcentajeSuc1 = (float)(contTransaccionesSuc1 * 100) / (contTransaccionesSuc1 + contTransaccionesSuc2 + contTransaccionesSuc3);
    porcentajeSuc2 = (float)(contTransaccionesSuc2 * 100) / (contTransaccionesSuc1 + contTransaccionesSuc2 + contTransaccionesSuc3);
    porcentajeSuc3 = (float)(contTransaccionesSuc3 * 100) / (contTransaccionesSuc1 + contTransaccionesSuc2 + contTransaccionesSuc3);
    cout << "Porcentaje para cada una de las sucursales" << endl;
    cout << "Sucursal 1: " << fixed << setprecision(2) << porcentajeSuc1 << "%" << endl;
    cout << "Sucursal 2: " << fixed << setprecision(2) << porcentajeSuc2 << "%" << endl;
    cout << "Sucursal 3: " << fixed << setprecision(2) << porcentajeSuc3 << "%" << endl;
    ///D
    cout << "Total de pesos depositados para cada una de las sucursales" << endl;
    cout << "Sucursal 1: $" << totalPesosDepSuc1 << endl;
    cout << "Sucursal 2: $" << totalPesosDepSuc2 << endl;
    cout << "Sucursal 3: $" << totalPesosDepSuc3 << endl;
    ///E
    cout << "Cantidad de depósitos para la sucursal de Tigre: " << cantDepSucTigre << endl;
    ///F
    if(cantDepSuc1 > cantDepSuc2 && cantDepSuc1 >> cantDepSucTigre)
    {
        cout << "El numero de sucursal que recibió más cantidad de depósitos fue 1." << endl;
    }
    else
    {
        if(cantDepSuc2 > cantDepSuc1 && cantDepSuc2 > cantDepSucTigre)
        {
            cout << "El numero de sucursal que recibió más cantidad de depósitos fue 2." << endl;
        }
        else
        {
            cout << "El numero de sucursal que recibió más cantidad de depósitos fue 3." << endl;
        }
    }

    return 0;

}

