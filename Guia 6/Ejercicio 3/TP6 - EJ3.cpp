/*Hacer un programa donde se carguen 15 números enteros y luego muestre por pantalla el mínimo elemento del vector y además indique cuántas veces se repite el valor mínimo dentro del vector.*/
#include <iostream>
#include <clocale>

using namespace std;

int main(){
   setlocale(LC_ALL, "Spanish");

   const int NUMEROS = 14;
   int vectorNumerosEnteros[NUMEROS];
   int i;

   for(i=0; i<=NUMEROS; i++)
   {
       cout << "Ingresar un número #" << i << ": ";
       cin >> vectorNumerosEnteros[i];
   }

   int primerMenorNumero, seRepite=0;

   for(i=0; i<=NUMEROS; i++)
   {
       if(i==0)
       {
           primerMenorNumero = vectorNumerosEnteros[i];
       }
       else
       {
           if(vectorNumerosEnteros[i] < primerMenorNumero)
           {
               primerMenorNumero = vectorNumerosEnteros[i];
           }
           if(vectorNumerosEnteros[i] == primerMenorNumero)
           {
               seRepite++;
           }

       }
   }

   cout << "El minimo elemento del vector es: " << primerMenorNumero;
   if(seRepite > 0)
   {
       cout << endl << " y se repitio " << seRepite << " veces";
   }



   return 0;
}
