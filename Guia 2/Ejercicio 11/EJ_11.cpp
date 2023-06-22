/*Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números son positivos.*/

#include <iostream>
using namespace std;

int main(){

   int a,b,c,d,e,cont_pos=0;

   cout << "Ingresar cinco numeros: " << endl;
   cin >> a,cin >> b,cin >> c,cin >> d,cin >> e;

   if(a>0){
    cont_pos++;
   }
   if(b>0){
    cont_pos++;
   }
   if(c>0){
    cont_pos++;
   }
   if(d>0){
    cont_pos++;
   }
   if(e>0){
    cont_pos++;
   }

   cout << "Cantidad de positivos: " << cont_pos << endl;

   return 0;
}
