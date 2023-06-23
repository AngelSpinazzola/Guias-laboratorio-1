/*Hacer un programa para ingresar un número y luego informar la cantidad de divisores de ese número.
Ejemplo 1. Si se ingresa 6 se listarán: 4 divisores.
Ejemplo 2. Si se ingresa 9 se listarán: 3 divisores.
Ejemplo 3. Si se ingresa 11 se listará: 2 divisores.
*/

#include <iostream>
using namespace std;

int main(){

   int i, n, div=0;

   cout << "Ingresar un numnero: ";
   cin >> n;

   for(i=1; i<=n; i++){
      if(n % i == 0){
        div++;
      }
   }

   cout << div << " divisores. ";

   return 0;
}
