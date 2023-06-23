/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo y la posición dentro de la lista.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo: 35 - Posición: 7.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo: 55 - Posición: 5.
Ejemplo: -5, -10, -20, -8, -55, -400, -15, -20, 0. Se listará Máximo: -5 - Posición: 1.
*/
#include <iostream>
#include <clocale>

using namespace std;

int main(){
   setlocale(LC_ALL, "Spanish");

   int n, n_max, posicion=0, cont=0;
   bool primero=true;

   cout << "Lista de numeros: ";
   cin >> n;
   primero = false;

   while(n != 0){
      cont++;
      if(primero == false){
         primero = true;
         n_max = n;
         posicion = cont;
      }
      else if(n > n_max){
         n_max = n;
         posicion = cont;
      }
      cout << "Lista de numeros: ";
      cin >> n;
   }

   cout << "Máximo: " << n_max << " - " << "Posición: " << posicion;

   return 0;
}
