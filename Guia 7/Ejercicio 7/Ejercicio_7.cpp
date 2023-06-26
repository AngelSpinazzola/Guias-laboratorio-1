/**Hacer una funci�n que reciba un vector de n�meros enteros y su tama�o y devuelva la posici�n en donde se encuentra el valor m�ximo del vector.*/
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

    cout << "El valor m�ximo se encuentra en la posici�n #" << posicionValorMax << endl;

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
