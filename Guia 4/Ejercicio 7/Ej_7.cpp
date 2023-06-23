/*Dada una lista de números que finaliza cuando se ingresa un número divisible por 7, informar cual es el anteúltimo y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 10, 5, 18, 14 se informa -5 y 5.

Nota: Contemplar la posibilidad que podría no haber números impares en la lista.
*/
#include <iostream>
#include <clocale>

using namespace std;

int main(){
   setlocale(LC_ALL, "Spanish");

   int n, ante_ultimo_impar, ultimo_impar;
   bool primer_impar=false, segundo_impar=false;

   cout << "Numero: ";
   cin >> n;
   while(n % 7 != 0){

      if(n % 2 != 0 && primer_impar == true){
          ante_ultimo_impar = ultimo_impar;
          ultimo_impar = n;
      }
      if(n % 2 != 0 && primer_impar == false){
          primer_impar = true;
          ultimo_impar = n;
      }
      cout << "Numero: ";
      cin >> n;
   }

   cout << ante_ultimo_impar << " y " << ultimo_impar;

   return 0;
}
