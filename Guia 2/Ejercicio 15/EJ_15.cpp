/*Hacer un programa para ingresar por teclado las cuatro notas de los ex�menes obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
- �Promociona�, si obtuvo en los cuatro ex�menes nota 7 o m�s.
- �Rinde examen final�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes.
- �Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los ex�menes.
- �Recursa la materia�, si no aprob� ning�n examen parcial.
*/

#include <iostream>
using namespace std;

int main(){

   float n1,n2,n3,n4;
   int con=0;

   cout << "Ingresar las 4 notas del alumno: " << endl;
   cin >> n1;
   cin >> n2;
   cin >> n3;
   cin >> n4;
   if(n1 >= 4){con++;}
   if(n2 >= 4){con++;}
   if(n3 >= 4){con++;}
   if(n4 >= 4){con++;}

   if(n1 >= 7 && n2 >= 7 && n3 >= 7 && n4 >= 7){
      cout << "Promociona";
   }
   else if(con >= 3){
      cout << "Rinde examen final";
   }
   else if(con >= 1){
      cout << "Recupera parciales";
   }
   else{
      cout << "Recursa la materia";
   }

   return 0;
}
