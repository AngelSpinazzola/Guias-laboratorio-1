/*Hacer un programa para ingresar cinco números y listar el máximo de ellos.
*/

#include <iostream>
using namespace std;

int main()
{

    int a,b,c,d,e;

    cout << "Ingresar 3 numeros: " << endl;
    cin >> a, cin >> b, cin >> c, cin >> d, cin >> e;

    if(a > b && a > c && a > d && a > e)
    {
        cout << "El mayor es: " << a;
    }
    else if(b > a && b > c && b > d && b > e)
    {
        cout << "El mayor es: " << b;
    }
    else if(c > b && c > d && c > e)
    {
        cout << "El mayor es: " << c;
    }
    else if(d > c && d > e)
    {
        cout << "El mayor es: " << d;
    }
    else
    {
        cout << "El mayor es: " << e;
    }

    return 0;
}
