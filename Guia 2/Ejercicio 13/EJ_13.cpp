/*Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona, ingresando d�a, mes y a�o como 3 datos individuales.
-Luego ingresar la fecha actual ingresando d�a, mes y a�o como 3 datos individuales.

-Calcular luego la edad en a�os de esa persona y listarlo por pantalla.

Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que los 19 reci�n los cumple en diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 d�as para cumplir los 19 a�os.
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

int main(){

   setlocale(LC_ALL, "spanish");
   int dia, mes, anio, edad;
   int dia_act, mes_act, anio_act;

   cout << "Ingresar fecha de nacimiento" << endl;
   cout << "Dia: ";
   cin >> dia;
   cout << "Mes: ";
   cin >> mes;
   cout << "A�o: ";
   cin >> anio;

   cout << "Ingresar fecha actual" << endl;
   cout << "Dia: ";
   cin >> dia_act;
   cout << "Mes: ";
   cin >> mes_act;
   cout << "A�o: ";
   cin >> anio_act;

   if(mes <= mes_act){
      if(dia <= dia_act){
          edad = anio_act - anio;
          cout << "Edad: " << edad;
      }
   }
   else{
      edad = anio_act - anio;
      cout << "Edad: " << edad-1;
   }

   return 0;
}
