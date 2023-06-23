/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo 55.
Ejemplo: -5, -10, -20, -8, -55, -13, -55, -8, -15, -20, 0. Se listar� M�ximo -5.
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

   cout << "M�ximo: " << n_max;

   return 0;
}
