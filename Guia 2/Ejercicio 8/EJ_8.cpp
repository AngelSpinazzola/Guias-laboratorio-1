/*Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y luego listar que tipo de triángulo es:
- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.
*/

#include <iostream>
using namespace std;

int main(){

   int l1, l2, l3;

   cout << "Ingresar los 3 lados de un triangulo: " << endl;
   cin >> l1;
   cin >> l2;
   cin >> l3;

   if(l1 == l2 && l1 == l3){
      cout << "Equilatero";
   }
   else if(l1 != l2 && l1 != l3){
      cout << "Escaleno";
   }
   else{
      cout << "Isosceles";
   }

   return 0;
}
