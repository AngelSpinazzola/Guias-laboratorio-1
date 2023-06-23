/*Dada una lista de 10 números enteros. Calcular e informar el primer número par, el primer número primo.*/

#include <iostream>
using namespace std;

int main(){

   int i, x, n, div, pri_par, pri_primo;
   bool primer_par=false, primer_primo=false;

   for(i=0; i<10; i++){
      cout << "Numero: ";
      cin >> n;

      if(primer_par == false){
            if(n%2 == 0){
                primer_par = true;
                pri_par = n;
            }
      }
      if(primer_primo == false){
         div=0;
         for(x=1; x<=n; x++){
            if(n%x == 0){
                div++;
            }
         }
         if(div == 2){
            primer_primo = true;
            pri_primo = n;
         }
      }
   }

   cout << "Primer numero par: " << pri_par << endl;
   cout << "Primer numero primo: " << pri_primo << endl;






   return 0;
}
