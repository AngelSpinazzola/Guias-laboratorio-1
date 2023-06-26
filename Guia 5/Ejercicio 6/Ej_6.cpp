#include <iostream>
#include <clocale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    //DATOS ESTRUCTURA PRINCIPAL
    int codProducto, tipoProducto;
    float cantKgVendidos, totalRecaudado;
    //DATOS PUNTO A
    float totalProductoA=0, totalProductoB=0, totalProductoC=0;
    //DATOS PUNTO B
    int contProductos=0;
    float porcentajeProductoA, porcentajeProductoB, porcentajeProductoC;

    //ESTRUCTURA PRINCIPAL
    cout << "Código de producto: ";
    cin >> codProducto;

    while(codProducto >= 0)
    {
        //CUENTO PRODUCTOS PARA PUNTO B
        contProductos++;

        cout << "Tipo (1 - Factura, 2 - Torta, 3 - Panificado): ";
        cin >> tipoProducto;
        cout << "Cantidad de kilogramos vendidos: ";
        cin >> cantKgVendidos;
        cout << "Total recaudado: ";
        cin >> totalRecaudado;

        //RESUELVO PUNTO A
        switch(tipoProducto)
        {
        case 1:
            totalProductoA+=totalRecaudado;
            break;

        case 2:
            totalProductoB+=totalRecaudado;
            break;

        case 3:
            totalProductoC+=totalRecaudado;
            break;
        }

        cout << "Código de producto: ";
        cin >> codProducto;
    }
    //FIN ESTRUCTURA PRINCIPAL
    //MUESTRO PUNTO A
    if(totalProductoA < totalProductoB && totalProductoA < totalProductoC)
    {
        cout << "El código de producto que recaudo la menor cantidad total de dinero es: #1 - Factura" << endl;
    }
    else
    {
        if(totalProductoB < totalProductoA && totalProductoB < totalProductoC)
        {
            cout << "El código de producto que recaudo la menor cantidad total de dinero es: #2 - Torta" << endl;
        }
        else
        {
            cout << "El código de producto que recaudo la menor cantidad total de dinero es: #3 - Panificado" << endl;
        }
    }
    //MUESTRO PUNTO B
    porcentajeProductoA = (totalProductoA * 100) / (totalProductoA+totalProductoB+totalProductoC);
    porcentajeProductoB = (totalProductoB * 100) / (totalProductoA+totalProductoB+totalProductoC);
    porcentajeProductoC = (totalProductoC * 100) / (totalProductoA+totalProductoB+totalProductoC);
    cout << "Porcentaje de recaudacion discriminado por tipo de producto" << fixed << setprecision(2) << endl;
    cout << "#1 - Factura: "  << porcentajeProductoA << "%" << endl;
    cout << "#2 - Torta: " << porcentajeProductoB << "%" << endl;
    cout << "#3 - Panificado: " << porcentajeProductoC << "%" << endl;



    return 0;
}
