/**Hacer una funci�n que reciba como par�metro dos n�meros enteros y devuelva verdadero si el primero de ellos es m�ltiplo del segundo. Caso contrario debe devolver falso.*/
#include <iostream>
#include <clocale>

using namespace std;

bool verSiEsMultiplo(int n1, int n2, bool &pregunta);

int main()
{
    setlocale(LC_ALL, "Spanish");

    int i, n1, n2;
    bool pregunta=false;
    cout << "Ingresar n�mero #1: ";
    cin >> n1;
    cout << "Ingres�r n�mero #2: ";
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

