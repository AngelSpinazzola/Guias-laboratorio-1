/*Hacer un programa para ingresar por teclado tres n�meros e informar con una leyenda aclaratoria si los tres son todos distintos entre s�, caso contrario no emitir nada.
Ayuda: Si A es distinto de B y B es distinto de C, eso no signica que A y C sean distintos.
Ejemplo: A=8, B=6 y C=8.
*/
#include <iostream>
using namespace std;

int main(){

   int a,b,c;

   cout << "Ingresar 3 numeros: " << endl;
   cin >> a;
   cin >> b;
   cin >> c;

   if(a != b && a != c){
      cout << "Los 3 son distintos entre si";
   }

   return 0;
}
