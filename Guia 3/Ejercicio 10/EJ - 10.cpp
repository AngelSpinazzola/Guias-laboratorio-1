/*Dada una lista de 7 números informar cual es el primer y segundo número impar ingresado.
Ejemplo: 8, 4, 5, 6, -9, 5,7 se informa 5 y -9.
*/

#include <iostream>
using namespace std;

int main(){

   int i, n;
   bool primer_impar=false, segundo_impar=false;
   int impar_1, impar_2;

   cout << "Ingresar la lista" << endl;
   for(i=0; i<7; i++){
      cout << "Numero: ";
      cin >> n;

      //PRIMER IMPAR
      if(primer_impar == false && n%2 != 0){
        primer_impar = true;
        impar_1 = n;
      }
      else if(segundo_impar == false && n%2 != 0){
        segundo_impar = true;
        impar_2 = n;
      }

   }

   cout << "Primer impar: " << impar_1 << endl;
   cout << "Segundo impar: " << impar_2 << endl;

   return 0;
}
