/**Hacer una funci�n que reciba como par�metro un n�mero float y devuelva un n�mero entero con el redondeo del mismo.
Por ejemplo:
Si recibe 7.78 debe devolver 8.
Si recibe 7.48 debe devolver 7.
Si recibe 7.5 debe devolver 8.
*/
#include <iostream>
#include <clocale>

int redondear(float &numero);

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int a;
    float n;
    cout << "Ingresar un n�mero: ";
    cin >> n;

    redondear(n);

    cout << endl << n;

    return 0;
}

int redondear(float &numero)
{
    int entero;
    float decimal;

    entero = numero;
    decimal = numero - entero;

    if(decimal > 0.5)
    {
        numero = entero + 1;
        return numero;
    }
    if(decimal < 0.5)
    {
        numero = entero;
        return numero;
    }
    else
    {
        numero = entero + 1;
        return numero;
    }

    return numero;
}
