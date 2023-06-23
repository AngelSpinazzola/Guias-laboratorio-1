/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo de los números pares.
Ejemplo: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listará Máximo 36.
Ejemplo: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listará Máximo 4.
Ejemplo: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listará Máximo 0
*/
#include <iostream>
#include <clocale>

using namespace std;

int main(){
   setlocale(LC_ALL, "Spanish");

   bool primer_par=false;
   int n, max_par;

   cout << "Número: ";
   cin >> n;

   while(n != 0){
      if(primer_par == false){
          if(n%2 == 0){
             primer_par = true;
             max_par = n;
          }
      }
      else if(n % 2 == 0 && n > max_par){
          max_par = n;
      }
      cout << "Número: ";
      cin >> n;
   }

   if(max_par < 0){
      cout << endl << "Máximo: " << n;
   }
   else{
      cout << endl << "Máximo: " << max_par;
   }


   return 0;
}
