/*Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la misma y luego informar por pantalla el importa a pagar.
Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15% entonces el total a pagar será de $ 1.020.
Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el 0% entonces el total a pagar será de $ 800.
*/

#include <iostream>
using namespace std;

int main(){

   float importe_venta;
   int descuento;

   cout << "Ingresar el importe de la venta: ";
   cin >> importe_venta;
   cout << "Ingresar el descuento de la venta: ";
   cin >> descuento;

   cout << "Importe a pagar: " << (100-descuento)*importe_venta/100;

   return 0;
}
