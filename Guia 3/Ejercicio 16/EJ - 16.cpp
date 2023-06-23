/*Hacer un programa que muestre los números primos entre el 1 y el 10000. El usuario no debe ingresar nada en este programa.*/

#include <iostream>
using namespace std;

int main(){

   int x, i, div;

   for(x=1; x<=10000; x++){
      for(i=1; i<=x; i++){
         if(x % i == 0){
            div++;
         }
      }
      if(div == 2){
        cout << "PRIMO: " << x << endl;
      }
      div=0;
   }

   return 0;
}
