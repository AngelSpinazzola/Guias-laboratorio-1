/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo 55.
Ejemplo: -5, -10, -20, -8, -55, -13, -55, -8, -15, -20, 0. Se listará Máximo -5.
*/

#include <iostream>
#include <clocale>

using namespace std;

int main(){
   setlocale(LC_ALL, "Spanish");

   int n, n_max;
   bool primero=true;

   cout << "Ingresar numeros: ";
   cin >> n;
   primero=false;

   while(n != 0){

      if(primero == false){
         n_max = n;
         primero = true;
      }
      else if(n > n_max){
         n_max = n;
      }

      cout << "Ingresar numeros: ";
      cin >> n;
   }

   cout << "Máximo: " << n_max;

   return 0;
}
