/*Hacer un programa donde se carguen 15 números enteros y luego le solicite al usuario un número e indique si el mismo pertenece a la lista cargada anteriormente.*/
#include <iostream>
#include <clocale>

using namespace std;

int main(){
   setlocale(LC_ALL, "Spanish");

   const int NUMEROS = 14;
   int vectorNumerosEnteros[NUMEROS];
   int i, numero;

   for(i=0; i<=14; i++)
   {
       cout << "Ingresar un número en el elemento #" << i << ": ";
       cin >> vectorNumerosEnteros[i];
   }

   cout << "Ingresar un número para ver si esta en la lista ingresada anteriormente: ";
   cin >> numero;

   for(i=0; i<=14; i++)
   {
       if(numero == vectorNumerosEnteros[i])
       {
           cout << "El número ingresado: " << numero << " corresponde a la lista ingresada anteriormente";
       }
   }

   return 0;
}
