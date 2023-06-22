/*La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima en una zona y tiempo determinado. Dada la temperatura máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la amplitud térmica.

NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al de la temperatura mínima.
*/

#include <iostream>
using namespace std;

int main(){

   float temp_mayor, temp_menor, amplitud;

   cout << " Temp mayor: ";
   cin >> temp_mayor;
   cout << " Temp menor: ";
   cin >> temp_menor;

   amplitud = temp_mayor - temp_menor;

   cout << " Amplitud termica: " << amplitud << endl;

   return 0;
}
