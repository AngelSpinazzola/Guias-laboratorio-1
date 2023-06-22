/*Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente escala:
$ 10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo.
$ 12 por kW por el consumo excedente de 101 a 200 kW.
$ 15 por kW por el consumo excedente de 201 kW en adelante.

Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente, el programa calcule e informe el total a pagar por el mismo.
Ejemplo 1: Un consumo de 55 kW, se calcular�: $ 10 x 55= $ 550
Ejemplo 2: Un consumo de 125 kW, se calcular�: $ 10 x 100 + $ 12 x 25 = $1300.
Ejemplo 3: Un consumo de 250 kW, se calcular�: $ 10 x 100 + $ 12 x 100 + $ 15 x 50 = $ 2950.
*/

#include <iostream>
using namespace std;

int main()
{

    int kv;

    cout << "Ingresar KV del cliente: ";
    cin >> kv;

    if(kv <= 100)
    {
        kv = kv*10;
    }
    else if(kv > 100 && kv <= 200)
    {
        kv = ((kv%100) * 12) + 1000;
    }
    else
    {
        kv = ((kv%100) * 15) + 2200;
    }
    cout << "Importe a pagar por el cliente: " << kv << "$ ";

    return 0;
}
