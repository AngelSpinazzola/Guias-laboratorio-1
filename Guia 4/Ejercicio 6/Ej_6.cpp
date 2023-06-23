/*Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que se ingrese el 5º número par.
Calcular e informar:
La cantidad de ternas de números negativos ingresados de manera consecutiva.

Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2*/

#include <iostream>

using namespace std;

int main(){

   int n, cont_par=0, cont_ternas=0, terna=0;

   cout << "Ingresar lista de numeros: ";
   cin >> n;

   while(cont_par < 5){
      if(n%2==0){
        cont_par++;
      }
      if(n < 0){
        terna++;
      }
      else{
        terna=0;
      }
      if(terna == 3){
        cont_ternas++;
      }
      cout << "Ingresar lista de numeros: ";
      cin >> n;
      if(n%2==0 && cont_par == 4){
        cont_par = 5;
      }
   }

   cout << "Cantidad de ternas: " << cont_ternas;

   return 0;
}
