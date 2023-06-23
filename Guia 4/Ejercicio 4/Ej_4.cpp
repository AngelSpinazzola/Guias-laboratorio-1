/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo de los n�meros pares.
Ejemplo: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listar� M�ximo 36.
Ejemplo: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listar� M�ximo 4.
Ejemplo: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listar� M�ximo 0
*/
#include <iostream>
#include <clocale>

using namespace std;

int main(){
   setlocale(LC_ALL, "Spanish");

   bool primer_par=false;
   int n, max_par;

   cout << "N�mero: ";
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
      cout << "N�mero: ";
      cin >> n;
   }

   if(max_par < 0){
      cout << endl << "M�ximo: " << n;
   }
   else{
      cout << endl << "M�ximo: " << max_par;
   }


   return 0;
}
