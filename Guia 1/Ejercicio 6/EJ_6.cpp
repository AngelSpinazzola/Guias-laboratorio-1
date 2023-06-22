/*Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes. El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación promedio $ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/

#include <iostream>
using namespace std;

int main(){

   float rec_sem_1, rec_sem_2, rec_sem_3, rec_sem_4;
   float por_rec_sem_1, por_rec_sem_2, por_rec_sem_3, por_rec_sem_4;
   float promedio, total;

   cout << "Ingresar la recaudacion de la semana 1: ";
   cin >> rec_sem_1;
   cout << "Ingresar la recaudacion de la semana 2: ";
   cin >> rec_sem_2;
   cout << "Ingresar la recaudacion de la semana 3: ";
   cin >> rec_sem_3;
   cout << "Ingresar la recaudacion de la semana 4: ";
   cin >> rec_sem_4;

   //Saco el total para luego sacar el porcentaje de cada semana
   total = rec_sem_1 + rec_sem_2 + rec_sem_3 + rec_sem_4;
   //Saco el promedio de las 4 semanas
   promedio = total / 4;

   por_rec_sem_1 = rec_sem_1 * 100 / total;
   por_rec_sem_2 = rec_sem_2 * 100 / total;
   por_rec_sem_3 = rec_sem_3 * 100 / total;
   por_rec_sem_4 = rec_sem_4 * 100 / total;

   cout << "Recaudacion promedio por semana: " << promedio << "$ " << endl;

   cout << "Porcentaje de recaudacion semana 1: " << por_rec_sem_1 << "%" << endl;
   cout << "Porcentaje de recaudacion semana 2: " << por_rec_sem_2 << "%" << endl;
   cout << "Porcentaje de recaudacion semana 3: " << por_rec_sem_3 << "%" << endl;
   cout << "Porcentaje de recaudacion semana 4: " << por_rec_sem_4 << "%" << endl;

   return 0;
}
