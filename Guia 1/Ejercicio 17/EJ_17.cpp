/*El Laboratorio Gonzalez&Velez hace frascos de p�ldoras para aprender a programar. Cada frasco contiene 75 p�ldoras y cada p�ldora contiene 45mg de Briancetamol, 2grs de Pintoxicilina y 7mg de �cido Simon�tico.
Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la cantidad de miligramos de Briancetamol, Pintoxicilina y de �cido Simon�tico que son necesarios para elaborarlos.
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
