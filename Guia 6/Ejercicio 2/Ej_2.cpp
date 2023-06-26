/*Hacer un programa donde se carguen 15 n�meros enteros y luego le solicite al usuario un n�mero e indique si el mismo pertenece a la lista cargada anteriormente.*/
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
       cout << "Ingresar un n�mero en el elemento #" << i << ": ";
       cin >> vectorNumerosEnteros[i];
   }

   cout << "Ingresar un n�mero para ver si esta en la lista ingresada anteriormente: ";
   cin >> numero;

   for(i=0; i<=14; i++)
   {
       if(numero == vectorNumerosEnteros[i])
       {
           cout << "El n�mero ingresado: " << numero << " corresponde a la lista ingresada anteriormente";
       }
   }

   return 0;
}
