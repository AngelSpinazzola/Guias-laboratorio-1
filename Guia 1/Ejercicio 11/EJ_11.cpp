/*Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cu�ntos d�as, horas y minutos equivalen.
Ejemplo 1: si se ingresan 1520 minutos el programa mostrar� por pantalla que equivalen a 1 d�a, 1 hora y 20 minutos.
Ejemplo 2: si se ingresan 480 minutos el programa mostrar� por pantalla que equivalen a 0 d�a, 8 horas y 0 minutos.
*/

#include <iostream>
using namespace std;

int main(){

   int minutos, dia, hora, restante;

   cout << "Ingresar cantidad de minutos: ";
   cin >> minutos;

   dia = (minutos/60) / 24;
   hora = (minutos/60) % 24;
   minutos = minutos % 60;

   cout << "Equivale a: " << dia << " dia y " << hora << " hora y " << minutos << " minutos ";

   return 0;
}
