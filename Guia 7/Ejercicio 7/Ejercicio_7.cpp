/**Hacer una función que reciba un vector de números enteros y su tamaño y devuelva la posición en donde se encuentra el valor máximo del vector.*/
#include <iostream>
#include <clocale>

using namespace std;

int posicionMaxima(int vectorEnteros[], int TAM);

int main()
{
    setlocale(LC_ALL, "Spanish");
    const int TAM = 10;
    int vectorEnteros[TAM]={};
    int posicionValorMax;

    posicionValorMax = posicionMaxima(vectorEnteros, TAM);

    cout << "El valor máximo se encuentra en la posición #" << posicionValorMax << endl;

    return 0;
}

int posicionMaxima(int vectorEnteros[], int TAM)
{
    int posicionValorMax, valorMaximo;
    int i;

    for(i=0; i<TAM; i++)
    {
        if(i == 0)
        {
            posicionValorMax = i;
            valorMaximo = vectorEnteros[i];
        }
        else if(vectorEnteros[i] > valorMaximo)
        {
            posicionValorMax = i;
            valorMaximo = vectorEnteros[i];
        }
    }
    return posicionValorMax;
}
