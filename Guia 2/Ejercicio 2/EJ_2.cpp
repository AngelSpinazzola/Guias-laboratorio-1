/*Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo. */

#include <iostream>
using namespace std;

int main(){

   int a, b;

   cout << "Ingresar dos numeros: " << endl;
   cin >> a;
   cin >> b;

   if(a%b == 0){
      cout << a << " es multiplo de " << b;
   }else{
      cout << a << " no es multiplo de " << b;
   }

   return 0;
}
