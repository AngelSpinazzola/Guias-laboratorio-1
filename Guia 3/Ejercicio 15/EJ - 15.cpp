/*Hacer un programa para ingresar un n�mero positivo y calcular e informar si el mismo es un n�mero primero.
 Recordar que un n�mero primo es un n�mero natural que tiene exactamente dos divisores.*/

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
