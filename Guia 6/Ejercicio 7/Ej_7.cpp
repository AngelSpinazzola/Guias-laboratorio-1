/**Se ingresa por teclado en un vector de 10 elementos, 9 números todos distintos entre sí y ordenados de menor a mayor.
Se pide ingresar otro valor e insertarlo en el orden correspondiente y desplazar todos los elementos un lugar.

Ejemplo:
Vector → {1 3 4 5 6 7 10 12 16}
Número ingresado: 9
Vector → {1 3 4 5 6 7 9 10 12 16}
*/
#include <iostream>

using namespace std;

int main()
{
    const int ELEMENTOS = 10;
    int i, x, numero, aux, vecNumeros[ELEMENTOS];

    for(i=0; i<9; i++)
    {
        cout << "Ingresar un numero en el elemento #" << i << ": ";
        cin >> numero;

        vecNumeros[i]=numero;
    }
    //
    cout << "Ingresar el ultimo numero: ";
    cin >> vecNumeros[9];
    //ORDENO EL VECTOR
    for(x=0; x<ELEMENTOS; x++)
    {
        for(i=0; i<ELEMENTOS; i++)
        {
            if(vecNumeros[i+1] < vecNumeros[i])
            {
                //AUX = 10
                aux = vecNumeros[i+1];
                vecNumeros[i+1] = vecNumeros[i];
                vecNumeros[i] = aux;
            }
        }
    }
    //MUESTRO
    cout << "Vector > { ";
    for(i=0; i<10; i++)
    {
        cout << vecNumeros[i] << " ";
    }
    cout << "}";

    return 0;
}
