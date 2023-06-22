/*Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.

Ejemplo:
Importe  : 4500 ↲
Descuento: 40 ↲
Importe    : $ 4500
Descuento  : $ 1800
Total      : $ 2700
*/

#include <iostream>
using namespace std;

int main(){

   int descuento;
   float importe_venta, total;

   cout << " Ingresar importe de la venta: ";
   cin >> importe_venta;
   cout << " Ingresar el descuento a aplicar: ";
   cin >> descuento;

   descuento = (importe_venta / 100) * descuento;
   total = importe_venta - descuento;

   cout << " Importe : $ " << importe_venta << endl;
   cout << " Descuento: $ " << descuento << endl;
   cout << " Total: $ " << total << endl;

   return 0;
}
