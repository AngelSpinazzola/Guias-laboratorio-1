/*La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima en una zona y tiempo determinado. Dada la temperatura m�xima y la temperatura m�nima de San Fernando de ayer, calcular y mostrar la amplitud t�rmica.

NOTA: El usuario ingresar� como temperatura m�xima un valor mayor o igual al de la temperatura m�nima.
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
