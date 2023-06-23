/*Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores ingresados, aclarando cual es el máximo y cual el que le sigue.
Ejemplo: 10, 8, 12, 14, 3 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2 el resultado será -2 y -4
*/

#include <iostream>
using namespace std;

int main(){

   int i, a, mayor_segundo, mayor_primero;

   for(i=0; i<5; i++){
      cout << "Numero: ";
      cin >> a;

      if(i == 0){
        mayor_primero = a;
        mayor_segundo = a;
      }
      else if(a > mayor_primero){
        mayor_segundo = mayor_primero;
        mayor_primero = a;
      }
      else if(a > mayor_segundo){
        mayor_segundo = a;
      }

   }

   cout << "Primero mayor: " << mayor_primero << endl;
   cout << "Primero segundo: " << mayor_segundo << endl;

   return 0;
}
