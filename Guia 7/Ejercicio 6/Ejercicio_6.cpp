/**Hacer una función que reciba un número entero llamado valor_buscado, un vector de números enteros y su tamaño y devuelva verdadero si el valor buscado se encuentra dentro del vector.
Caso contrario debe devolver falso.
*/

#include <iostream>
#include <clocale>

using namespace std;

bool buscarValor(int valor_buscado, int vectorEnteros[], int TAM);

int main(){
   setlocale(LC_ALL, "Spanish");

   const int TAM = 10;
   int vectorEnteros[TAM];
   int valor_buscado = 3;
   bool verSiEncontroValor;

   /*test
   vectorEnteros[5] = valor_buscado;
   */

   verSiEncontroValor = buscarValor(valor_buscado, vectorEnteros, TAM);
   cout << verSiEncontroValor;

   return 0;
}

bool buscarValor(int valor_buscado, int vectorEnteros[], int TAM)
{
    int i;
    for(i=0; i<TAM; i++)
    {
        if(valor_buscado == vectorEnteros[i])
        {
            return true;
        }
    }
    return false;
}
