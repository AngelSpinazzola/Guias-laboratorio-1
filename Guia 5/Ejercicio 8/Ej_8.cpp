/**Un popular juego de dados Napolitano llamado “Lara Lara” consiste en lanzar tres dados y sumar el puntaje teniendo en cuenta que el mismo consiste en:
la suma de los valores pares de los dados multiplicado por el tercer dado lanzado.
Por ejemplo:
1 4 6 → Suma de pares (4 + 6) → 10 * 6 (último dado) → 60 pts
1 3 5 → Suma de pares 0 → 0 * 5 (último dado) → 0 pts

Hacer un programa para ingresar por teclado los valores de los 3 dados e informar que puntaje le corresponde en el “Lara Lara”.
*/
#include <iostream>
#include <clocale>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int i, dados, puntaje, sumaPares=0;

    cout << "Ingresar los valores de los 3 dados: " << endl;

    for(i=0; i<3; i++)
    {
        cin >> dados;
        if(dados % 2 == 0)
        {
            sumaPares+=dados;
        }
    }
    puntaje = sumaPares * dados;
    cout << "Puntaje correspondiente: " << puntaje << endl;

    return 0;
}
