/*Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia absoluta entre ambos.
Ejemplo 1: Si se ingresan 3 y 8, se emite 5. Si se ingresan 8 y 3, se emite 5.
Ejemplo 2: Si se ingresan -3 y 9, se emite 12. Si se ingresan -12 y -1, se emite 11.
*/

#include <iostream>
using namespace std;

int main(){

   int n1, n2, dif;

   cout << "Ingresar dos numeros: " << endl;
   cin >> n1;
   cin >> n2;

   if(n2 > n1){
      dif = n2-n1;
      cout << "Diferencia absoluta: " << dif;
   }
   else{
      dif = n1-n2;
      cout << "Diferencia absoluta: " << dif;
   }

   return 0;
}
