#include <iostream>
#include <clocale>
using namespace std;

#include "funciones.h"


void cargarVector(int vec[], int TAM)
{
    cout << "CARGA PARA UN VECTOR DE: " << TAM << " ELEMENTOS." << endl;
    for(int i=0; i<TAM; i++)
    {
        cout << "Ingresar un número entero en el indice " << i << ": ";
        cin >> vec[i];
    }
}
//
void unirVectores(int vectorDe5Enteros[], int vectorDe10Enteros[], int v_union[])
{
    int i;
    for(i=0; i<5; i++)
    {
        v_union[i] = vectorDe5Enteros[i];
    }
    for(int j=0; j<10; j++){
        v_union[i] = vectorDe10Enteros[j];
        i++;
    }

}
void mostrarVectorDe15Elementos(int v_union[])
{
    for(int i=0; i<15; i++)
    {
        cout << "FILA :" << i << " CONTIENE: " << v_union[i] << endl;
    }
}
