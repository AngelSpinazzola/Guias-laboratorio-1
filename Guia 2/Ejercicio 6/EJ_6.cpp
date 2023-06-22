/*Hacer un programa para ingresar por teclado tres números.
-Luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre sí.
-Caso contrario no emitir nada. Ayuda: Si A es igual a B y B es igual a C, entonces A y C son iguales.
*/

#include <iostream>
using namespace std;

int main(){

   int a,b,c;

   cout << "Ingresar 3 numeros: " << endl;
   cin >> a;
   cin >> b;
   cin >> c;

   if(a == b && b == c){
      cout << "Los 3 son iguales entre si";
   }

   return 0;
}
