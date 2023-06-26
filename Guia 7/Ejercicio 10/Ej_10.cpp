/*Hacer una función que reciba un número entero llamado dia y una cadena de caracteres llamada nombre y le asigne el nombre correspondiente según el número de día.
Siendo 0 → Domingo y 6 → Sábado.
*/
#include <locale.h>
#include <iostream>
#include <clocale>
#include <string>

using namespace std;

void asignarNombreDelDia(int dia, string nombre[]);

int main(){
   setlocale(LC_ALL, "Spanish");

   const int TAM = 7;
   int dia;
   string nombre[TAM];

   cout << "Dia?: ";
   cin >> dia;

   asignarNombreDelDia(dia, nombre);

   for(int i=0; i<TAM; i++){
      if(dia == i){
        cout << nombre[i];
      }
   }

   return 0;
}

void asignarNombreDelDia(int dia, string nombre[])
{
   string nombreDeDias[7]={"Domingo","Lunes","Martes","Miércoles","Jueves","Viernes","Sábado"};
   for(int i=0; i<7; i++){
       if(dia == i){
           nombre[i] = nombreDeDias[i];
       }
   }
}
