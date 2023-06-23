/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo y la posici�n dentro de la lista.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo: 35 - Posici�n: 7.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo: 55 - Posici�n: 5.
Ejemplo: -5, -10, -20, -8, -55, -400, -15, -20, 0. Se listar� M�ximo: -5 - Posici�n: 1.
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

   cout << "M�ximo: " << n_max << " - " << "Posici�n: " << posicion;

   return 0;
}
