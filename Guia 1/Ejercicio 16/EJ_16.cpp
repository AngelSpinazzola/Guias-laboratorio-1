/*Hacer un programa para ingresar una letra en may�sculas en una variable de tipo char y mostrar cu�ntas letras de diferencia hay en el alfabeto con respecto a la 'A'.

Ejemplo:
Si el usuario ingresa la letra C. Hay dos letras de diferencia con respecto a la A.

Recomendaci�n:
Tratar de no googlear la soluci�n. Si no sale, dejarlo decantar y probar muchas variantes.
*/

#include <iostream>
using namespace std;

int main(){

   char letra, inicial='A';
   int dif;

   cout << "Ingresar una letra en Mayuscula : ";
   cin >> letra;

   dif = letra - inicial;

   if(dif > 1){
      cout << dif << " Letras de diferencia";
   }
   else{
      cout << dif << " Letra de diferencia";
   }

   return 0;
}
