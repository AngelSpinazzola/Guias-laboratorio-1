/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar cuántos son positivos y cuántos son negativos.

Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.
*/

#include <iostream>
using namespace std;

int main(){

   int pos=0, neg=0, n;

   cout << "Ingresar lista de numeros: ";
   cin >> n;

   while(n != 0){
      if(n > 0){
         pos++;
      }
      else{
        neg++;
      }
      cout << "Ingresar lista de numeros: ";
      cin >> n;
   }

   cout << "Positivos: " << pos << endl;
   cout << "Negativos: " << neg << endl;

   return 0;
}
