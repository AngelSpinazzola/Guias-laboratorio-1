/*Hacer un programa para leer tres números diferentes y determinar e informar el número del medio. Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.*/

#include <iostream>
using namespace std;

int main(){

   int n1, n2, n3;

   cout << "Ingrese 3 numeros: " << endl;
   cin >> n1;
   cin >> n2;
   cin >> n3;

   if(n1 > n2 && n1 < n3 || n1 > n3 && n1 < n2){
      cout << " El del medio es: " << n1;
   }
   if(n2 > n1 && n2 < n3 || n2 > n3 && n2 < n1){
      cout << "El del medio es: " << n2;
   }
   if(n3 > n1 && n3 < n2 || n3 > n2 && n3 < n1){
      cout << "El del medio es: " << n3;
   }

   return 0;
}
