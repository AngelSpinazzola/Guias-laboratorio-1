/**Hacer una función que reciba como parámetro dos números enteros y devuelva verdadero si el primero de ellos es múltiplo del segundo. Caso contrario debe devolver falso.*/
#include <iostream>
#include <clocale>

using namespace std;

bool verSiEsMultiplo(int n1, int n2, bool &pregunta);

int main()
{
    setlocale(LC_ALL, "Spanish");

    int i, n1, n2;
    bool pregunta=false;
    cout << "Ingresar número #1: ";
    cin >> n1;
    cout << "Ingresár número #2: ";
    cin >> n2;

    verSiEsMultiplo(n1, n2, pregunta);

    cout << endl << "Resultado: " << pregunta;

    return 0;
}

bool verSiEsMultiplo(int n1, int n2, bool &pregunta)
{
    int i;

    for(i=1; i<=n2; i++)
    {
        if( n2 * i == n1 )
        {
            pregunta = true;
        }
    }

    return pregunta;
}

