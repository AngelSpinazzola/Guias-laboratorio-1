/**Hacer una función que reciba un carácter llamado valor_buscado y un vector de cadenas de caracteres y devuelva la cantidad de veces que el carácter buscado se encuentra en el vector.*/
#include <iostream>
#include <clocale>

using namespace std;

int buscarValor(char valor_buscado, char cadena[], int TAM);

int main()
{
    setlocale(LC_ALL, "Spanish");

    const int TAM = 10;
    char valor_buscado = 'B';
    char cadena[TAM];
    int vecesRepetidas;

    /*test
    cadena[3] = 'B';
    */

    vecesRepetidas = buscarValor(valor_buscado, cadena, TAM);
    cout << vecesRepetidas;

    return 0;
}
int buscarValor(char valor_buscado, char cadena[], int TAM)
{
    int i, c=0;
    for(i=0; i<TAM; i++)
    {
        if(valor_buscado == cadena[i])
        {
            c++;
        }
    }
    return c;
}
