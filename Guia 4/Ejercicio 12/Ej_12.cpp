/**Un número Simonírico es un número positivo divisible por 15 y a la vez divisible por 3 pero no divisible por 6.
 Hacer un programa que muestre los primeros 1000 números Simoníricos. El usuario no debe ingresar nada.*/

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Spanish");

    int numero=1, contador=0;

    while(contador < 1000)
    {
        if(numero % 15 == 0 && numero % 3 == 0 && numero % 6 != 0)
        {
            contador++;
            cout << "POSICION #" << contador << " NUMERO SIMONIRICO: " << numero << endl;
        }
        numero++;
    }
    return 0;
}
