#include <iostream>
#include <clocale>
#include "funciones.h"

using namespace std;

void registrarDatos(int matrizStock[][15], int registrarVentas[], int matrizArticuloXSucursal[][4])
{
    int nroArticulo, stock, cantVendida, nroSuc;


    for(int i=0; i<15; i++){
    cout << "Nro de artículo: ";
    cin >> nroArticulo;
    cout << "Stock: ";
    cin >> stock;
    //LA FILA 0 ES EL STOCK PERMANENTE, Y LA FILA 1 EL STOCK PARA DESCONTAR MEDIANTE LAS VENTAS Y-
    //LUEGO PODER COMPARAR SI SE VENDIO MAS DE LA MITAD O QUEDO EN 0 DICHO STOCK
    matrizStock[0][nroArticulo-1] = stock;
    matrizStock[1][nroArticulo-1] = stock;
    }

    cout << "Nro de artículo (1 a 15): ";
    cin >> nroArticulo;
    while(nroArticulo != 0){

    cout << "Cantidad vendida: ";
    cin >> cantVendida;
    cout << "Nro. de Sucursal (1 a 4): ";
    cin >> nroSuc;

    //PUNTO A) Por cada artículo, la cantidad de unidades vendidas.
    registrarVentas[nroArticulo-1] += cantVendida;
    //PUNTO B) Por cada sucursal, los números de artículos que vendieron más de 10 unidades.
    matrizArticuloXSucursal[nroArticulo-1][nroSuc-1] += cantVendida;
    //PUNTO C) Por cada artículo, la sucursal donde más se comercializó. : IDEM punto b, se utiliza la matriz para resolver
    //PUNTO D) Los artículos cuyo stock quedaron en cero.
    matrizStock[1][nroArticulo-1]-=cantVendida;
    //PUNTO E) IDEM PUNTO D

    cout << "Nro de artículo (1 a 15): ";
    cin >> nroArticulo;
   }
}

void mostrarPuntoA(int registrarVentas[])
{
    for(int i=0; i<15; i++){
        if(registrarVentas[i] > 0){
            cout << "PUNTO 1) Para el artículo #" << i+1 << " la cantidad de unidades vendidas es: " << registrarVentas[i] << endl;
        }
    }
}
void mostrarPuntoB(int matrizArticuloXSucursal[][4])
{
    int sucursal = 4;
    int articulo = 15;
    int f, c;
    bool vendioMasDe10Unidades;
    for(c=0; c<sucursal; c++){
        vendioMasDe10Unidades = false;
        for(f=0; f<articulo; f++){
            if(matrizArticuloXSucursal[f][c] > 10 ){
                vendioMasDe10Unidades = true;
            }
        }
        if(vendioMasDe10Unidades == true){
            cout << "PUNTO 2) Para la sucursal #" << c+1 << " los números de artículos que vendieron más de 10 unidades son";
            cout << endl << "-----------" << endl;
            for(f=0; f<articulo; f++){
                if(matrizArticuloXSucursal[f][c] > 10){
                    cout << "Artículo #" << f+1 << " ";
                }
            }
            cout << endl << endl;
        }
    }
}
void mostrarPuntoC(int matrizArticuloXSucursal[][4])
{
    int f, c;
    int numeroDeVentas;
    int numeroSucursalMayorComercio;

    for(f=0; f<15; f++){
        numeroDeVentas = 0;
        for(c=0; c<4; c++){
            if(matrizArticuloXSucursal[f][c] > 0){
                numeroDeVentas = matrizArticuloXSucursal[f][c];
                numeroSucursalMayorComercio = c+1;
            }
            else if(matrizArticuloXSucursal[f][c] > numeroDeVentas){
                numeroDeVentas = matrizArticuloXSucursal[f][c];
                numeroSucursalMayorComercio = c+1;
            }
        }
        if(numeroDeVentas > 0){
            cout << "PUNTO 3) Para el artículo #" << f+1 << " la sucursal donde más se comercializo fue: " << numeroSucursalMayorComercio << endl;
        }
    }
}
void mostrarPuntoD(int matrizStock[][15])
{
    int f, c;

    for(f=0; f<15; f++){
        if(matrizStock[1][f] <= 0){
            cout << "PUNTO 4) El artículo #" << f+1 << " quedo en 0 stock." << endl;
        }
    }
}
void mostrarPuntoE(int matrizStock[][15])
{
    int f;
    int mitad;

    for(f=0; f<15; f++){
        mitad = matrizStock[0][f] / 2;
        if(matrizStock[1][f] < mitad){
            cout << "PUNTO 5) Para el artículo #" << f+1 << " su stock disminuyó más de la mitad." << endl;
        }
    }
}
