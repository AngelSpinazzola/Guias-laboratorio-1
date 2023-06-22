/*Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 más $ 2.000 de premio por cada auto vendido. Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $ 23.000.
*/

#include <iostream>
using namespace std;

int main(){

   int cant_autos_vendidos;
   float sueldo;

   cout << "Ingresar cantidad de autos vendidos: ";
   cin >> cant_autos_vendidos;

   sueldo = (cant_autos_vendidos * 2000) + 15000;

   cout << "Sueldo a pagar: " << sueldo << endl;



   return 0;
}
