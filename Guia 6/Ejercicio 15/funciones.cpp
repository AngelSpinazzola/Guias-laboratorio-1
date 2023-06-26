#include <iostream>
#include <clocale>
#include "funciones.h"

using namespace std;

void cargarVector(int vec[], int TAM)
{
    cout << "CARGA PARA UN VECTOR DE: " << TAM << " ELEMENTOS." << endl;
    for(int i=0; i<TAM; i++)
    {
        cout << "Ingresar un número entero en el indice " << i << ": ";
        cin >> vec[i];
    }
}

void generarInterseccion(int vectorDeCinco[], int vectorDeDiez[], int v_interseccion[])
{
    int c=0;

    for(int i=0; i<10; i++){
        for(int j=0; j<5; j++){
            if(vectorDeDiez[i] == vectorDeCinco[j]){
                v_interseccion[c] = vectorDeDiez[i];
                c++;
            }
        }
    }
}

void mostrarValoresEnComun(int v_interseccion[])
{
    for(int i=0; i<15; i++){
      if(v_interseccion[i] > 0){
         cout << "VALOR EN COMÚN: " << v_interseccion[i] << endl;
      }
   }

}
