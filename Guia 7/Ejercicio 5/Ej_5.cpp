/**Hacer una función que reciba un vector de números enteros y su tamaño y liste cada uno de los elementos.*/
#include <iostream>
#include <clocale>

void mostrarVector(int vecEnteros[], int TAM);

using namespace std;

int main(){
   setlocale(LC_ALL, "Spanish");

   int TAM = 10;
   int vecEnteros[TAM]={1,2,3,4,5,6,7,8,9,1};
   cout << "Elementos cargados: ";
   mostrarVector(vecEnteros, TAM);

   return 0;
}
void mostrarVector(int vecEnteros[], int TAM)
{
    int i;
    for(i=0; i<TAM; i++)
    {
        cout << " " << vecEnteros[i];
    }
}
