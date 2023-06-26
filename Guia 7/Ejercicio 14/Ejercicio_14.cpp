/*Ídem al ejercicio 6 pero debe devolver la cantidad de veces que el valor buscado se encuentra dentro del vector.*/
#include <iostream>
#include <clocale>

using namespace std;

int buscarValor(int valor_buscado, int vectorEnteros[], int TAM);

int main(){
   setlocale(LC_ALL, "Spanish");

   const int TAM = 10;
   int valor_buscado = 10;
   int vectorEnteros[TAM]={};
   int cantidadRepetidaValorBuscado;

   //TEST : MUESTRA 2  REPETIDOS POR PANTALLA
   vectorEnteros[3] = 10;
   vectorEnteros[5] = 10;
   //

   cantidadRepetidaValorBuscado = buscarValor(valor_buscado, vectorEnteros, TAM);
   cout << cantidadRepetidaValorBuscado;

   return 0;
}
int buscarValor(int valor_buscado, int vectorEnteros[], int TAM)
{
    int i;
    int igualesAValorBuscado=0;
    for(i=0; i<TAM; i++)
    {
        if(valor_buscado == vectorEnteros[i])
        {
            igualesAValorBuscado++;
        }
    }
    return igualesAValorBuscado;
}

