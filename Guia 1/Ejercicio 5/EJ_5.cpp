/*Un comercio vende tres marcas de alfajores distintas A, B y C.
Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
*/

#include <iostream>
using namespace std;

int main(){

   int a,b,c, aux;
   float ventas_a, ventas_b, ventas_c;

   cout << "Ingresar cantidad vendidas para la marca A: ";
   cin >> a;
   cout << "Ingresar cantidad vendidas para la marca B: ";
   cin >> b;
   cout << "Ingresar cantidad vendidas para la marca C: ";
   cin >> c;

   aux = a+b+c;
   ventas_a = (float)a * 100 / aux;
   ventas_b = (float)b * 100 / aux;
   ventas_c = (float)c * 100 / aux;

   cout << "Porcentaje para la marca A: " << ventas_a << "% " << endl;
   cout << "Porcentaje para la marca B: " << ventas_b << "% " << endl;
   cout << "Porcentaje para la marca C: " << ventas_c << "% " << endl;



   return 0;
}
