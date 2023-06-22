/*Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.*/

#include <iostream>
using namespace std;

int main(){

   int num;

   cout << "Numero: ";
   cin >> num;

   if(num > 0)
   {
       cout << "POSITIVO";
   }
   else if(num < 0){
       cout << "NEGATIVO";
   }
   else{
       cout << "CERO";
   }

   return 0;
}
