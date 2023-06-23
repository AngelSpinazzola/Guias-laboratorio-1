/*Hacer un programa para ingresar un número positivo y calcular e informar si el mismo es un número primero.
 Recordar que un número primo es un número natural que tiene exactamente dos divisores.*/

#include <iostream>
using namespace std;

int main(){

   int i, n, div=0;

   cout << "Ingresar un numero: ";
   cin >> n;

   for(i=1; i<=n; i++){
      if(n % i == 0){
        div++;
      }
   }

   if(div == 2){
    cout << "Es primo";
   }
   else{
    cout << "No es primo";
   }


   return 0;
}
