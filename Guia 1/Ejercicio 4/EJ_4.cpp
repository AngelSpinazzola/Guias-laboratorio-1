/*4
Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avión y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.
Ejemplo si el avión tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.
*/

#include <iostream>
using namespace std;

int main(){

   int cant_asientos_disponibles, cant_pasajes_ocupados, aux;
   float por_ocupacion, por_no_ocupacion;

   cout << "Ingresar cantidad de asientos disponibles: ";
   cin >> cant_asientos_disponibles;
   cout << endl << "Ingresar cantidad de pasajes ocupados: ";
   cin >> cant_pasajes_ocupados;

   aux = cant_asientos_disponibles - cant_pasajes_ocupados;
   por_ocupacion = cant_pasajes_ocupados * 100 / cant_asientos_disponibles;
   por_no_ocupacion = aux * 100 / cant_asientos_disponibles;

   cout << "Cantidad de ocupacion: " << por_ocupacion << "% "<< endl;
   cout << "Cantidad de NO ocupacion: " << por_no_ocupacion << "% "<< endl;





   return 0;
}
