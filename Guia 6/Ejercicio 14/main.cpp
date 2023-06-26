/*Hacer un programa que permita cargar un vector de 5 números enteros y otro vector de 10 números.
Luego de cargarlos, generar un tercer vector llamado v_union que contenga los datos del primer vector y a continuación los datos del segundo vector.*/

#include <iostream>
#include <clocale>
#include "funciones.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");
    const int CINCO = 5;
    const int DIEZ = 10;
    const int QUINCE = 15;
    int vectorDe5Enteros[CINCO];
    int vectorDe10Enteros[DIEZ];
    int v_union[QUINCE];

    cargarVector(vectorDe5Enteros, CINCO);
    cargarVector(vectorDe10Enteros, DIEZ);
    unirVectores(vectorDe5Enteros, vectorDe10Enteros, v_union);
    mostrarVectorDe15Elementos(v_union);

}
