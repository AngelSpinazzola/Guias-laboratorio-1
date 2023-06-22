/*Un negocio de perfumería efectúa descuentos según el importe de la venta.

- Si el importe es menor a $100 aplicar un descuento del 5%
- Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
- Si el importe es mayor a $500 aplicar un descuento del 15%

Hacer un programa donde se ingresa el importe original sin descuento y que se informe por pantalla el importe con el descuento ya aplicado.
*/

#include <iostream>
using namespace std;

int main(){

   float imp;

   cout << "Ingresar importe: ";
   cin >> imp;

   if(imp < 100)
   {
       imp = imp*0.95;
       cout << "Importe a pagar: " << imp << "$";
   }
   else if(imp >= 100 && imp <= 500)
   {
       imp = imp*0.90;
       cout << "Importe a pagar: " << imp << "$";
   }
   else{
       imp = imp*0.85;
       cout << "Importe a pagar: " << imp << "$";
   }

   return 0;
}
