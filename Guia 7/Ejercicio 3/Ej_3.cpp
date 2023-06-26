/**Hacer una funci�n que reciba un n�mero entero como par�metro y devuelva verdadero si el mismo es un n�mero primo. De lo contrario debe devolver falso.*/

#include <iostream>
#include <clocale>

bool verSiEsPrimo(int numero, bool &respuesta);

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numero;
    bool respuesta;

    cout << "Ingresar un n�mero: ";
    cin >> numero;

    verSiEsPrimo(numero, respuesta);

    if(respuesta == true)
    {
        cout << endl << "Verdadero";
    }
    else
    {
        cout << endl << "Falso";
    }

    return 0;
}

bool verSiEsPrimo(int numero, bool &respuesta)
{
    int i, cont=0;

    for(i = 1; i <= numero; i++)
    {
        if(numero % i == 0)
        {
            cont++;
        }
    }
    if(cont == 2)
    {
        return respuesta=true;
    }
    else
    {
        return respuesta=false;
    }
}
