/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, informar si todos están ordenados en forma creciente.
En caso de haber un número igual al anterior considerarlo como creciente. Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No Ordenado”
*/
#include <iostream>
#include <clocale>

using namespace std;

int main(){
   setlocale(LC_ALL, "Spanish");

   int n, cont_creciente, na;
   bool ordenado=true;

   cout << "Numero: ";
   cin >> n;

   while(n != 0){
      na = n;
      cout << "Numero: ";
      cin >> n;
      if(n < na && n != 0){
         ordenado=false;
      }
   }

   if(ordenado == true){
      cout << "Conjunto ordenado";
   }
   else{
      cout << "Conjunto no ordenado";
   }

   return 0;
}
