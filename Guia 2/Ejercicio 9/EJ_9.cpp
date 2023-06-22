/*Hacer un programa para ingresar tres números y listar el máximo de ellos.
*/

#include <iostream>
using namespace std;

int main(){

   int a,b,c;

   cout << "Ingresar 3 numeros: " << endl;
   cin >> a;
   cin >> b;
   cin >> c;

   if(a > b && a > c){
      cout << "El mayor es: " << a;
   }
   else if(b > a && b > c){
      cout << "El mayor es: " << b;
   }
   else{
      cout << "El mayor es: " << c;
   }

   return 0;
}
