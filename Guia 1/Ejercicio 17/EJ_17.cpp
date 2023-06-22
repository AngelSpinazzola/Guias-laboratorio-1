/*El Laboratorio Gonzalez&Velez hace frascos de píldoras para aprender a programar. Cada frasco contiene 75 píldoras y cada píldora contiene 45mg de Briancetamol, 2grs de Pintoxicilina y 7mg de Ácido Simonítico.
Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la cantidad de miligramos de Briancetamol, Pintoxicilina y de Ácido Simonítico que son necesarios para elaborarlos.
*/

#include <iostream>
using namespace std;

int main(){

   int cant_frascos, pildoras, briancetamol, pintoxicilina, acido_simonitico;

   cout << "Cantidad de frascos del pedido: ";
   cin >> cant_frascos;

   pildoras = cant_frascos * 75;
   briancetamol = 45 * pildoras;
   pintoxicilina = 2 * pildoras;
   acido_simonitico = 7 * pildoras;

   cout << "Cantidad necesaria de  Briancetamol: " << briancetamol << "mg" << endl;
   cout << "Cantidad necesaria de Pintoxicilina: " << pintoxicilina << "grs" << endl;
   cout << "Cantidad necesaria de Acido Simonitico: " << acido_simonitico << "mg" << endl;


   return 0;
}
