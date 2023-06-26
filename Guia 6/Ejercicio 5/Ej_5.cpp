/**Cargar un conjunto de 100 números reales y formar con los valores positivos un vector llamado pos y con los valores negativos un vector llamado nega.
Mostrar por pantalla la cantidad de elementos que contiene cada vector y luego cada uno de los vectores.

Sólo deben utilizarse dos vectores en el programa: pos y nega.*/

#include <iostream>
using namespace std;

int main()
{
    const int CIEN = 10;
    float numero, vectorPos[CIEN], vectorNega[CIEN];
    int i, contPos=0, contNega=0;

    for(i=0; i<CIEN; i++)
    {
        cout << "Ingresar un numero: ";
        cin >> numero;
        if(numero > 0)
        {
            vectorPos[contPos] = numero;
            contPos++;
        }
        if(numero < 0)
        {
            vectorNega[contNega] = numero;
            contNega++;
        }
    }

    cout << "Cantidad de elementos que contiene cada vector" << endl;
    cout << "VECTOR POSITIVO: " << contPos << endl;
    cout << "VECTOR NEGATIVO: " << contNega << endl;

    cout << "Elementos del vector positivo" << endl;
    for(i=0; i<contPos; i++)
    {
        cout << vectorPos[i] << " ";
    }
    cout << endl << "Elementos del vector negativo" << endl;
    for(i=0; i<contNega; i++)
    {
        cout << vectorNega[i] << " ";
    }

    return 0;
}
