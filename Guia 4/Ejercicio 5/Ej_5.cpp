/*Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que la diferencia entre el máximo y el mínimo sea mayor a 10. Calcular e informar:
La cantidad de números que componen la lista.
Ejemplo A: 1, 4, 6, -10 → Cantidad de números: 4
Ejemplo B: 100, 104, 106, 100, 100, 105, 200 → Cantidad de números: 7
*/

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int n, dif=0, c=0, n_max=0, n_min=0;
    bool primero=false;

    cout << "Número: ";
    cin >> n;
    c++;

    while( (n_max-n_min) <= 10 )
    {
        if(primero == false)
        {
            primero = true;
            n_max = n;
            n_min = n;
        }
        else
        {
            if(n > n_max)
            {
                n_max = n;
            }
            else if(n < n_min)
            {
                n_min = n;
            }
        }

        cout << "Número: ";
        cin >> n;
        c++;

        if(n > n_max)
        {
            n_max = n;
        }
        else if(n < n_min)
        {
            n_min = n;
        }

    }

    cout << "Cantidad de números: " << c ;




    return 0;
}
