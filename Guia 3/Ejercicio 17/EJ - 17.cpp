/*Una estaci�n meteorol�gica registr� una muestra clim�tica de los �ltimos 15 d�as. Por cada d�a registr�:
N�mero de d�a (entero)
Temperatura (float)
Mil�metros de lluvia (float)
Visibilidad en km (float)

Hay un registro por cada d�a. La informaci�n se encuentra ordenada por d�a. Se pide calcular e informar:
El n�mero de d�a que se haya registrado la temperatura m�xima.
La amplitud t�rmica de todo el per�odo.
La cantidad de d�as con neblina.
Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia. Mostrar "Quincena h�meda" si llovi� al menos un tercio de los d�as. De lo contrario mostrar "Quincena seca".

NOTA: La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.
*/

#include <iostream>
using namespace std;

int main(){

   int i;
   int n_dia;
   float temp, ml_lluvia, v_km;

   //PUNTO A
   int dia_max_temp;
   float max_temp;
   //PUNTO B
   float temp_menor, amplitud;
   //PUNTO C
   int cont_dias_neblina=0;
   //PUNTO D
   int cont_dias_lluvia=0;


   for(i=0; i<15; i++){
      cout << "Numero de dia: ";
      cin >> n_dia;
      cout << "Temperatura: ";
      cin >> temp;
      cout << "Milimetros de lluvia: ";
      cin >> ml_lluvia;
      cout << "Visibilidad de km: ";
      cin >> v_km;

      if(i==0){
        temp_menor = temp;
        max_temp = temp;
        dia_max_temp = n_dia;
      }
      else if(temp > max_temp){
        max_temp = temp;
        dia_max_temp = n_dia;
      }
      else if(temp < temp_menor){
        temp_menor = temp;
      }

      if(v_km < 2){
        cont_dias_neblina++;
      }
      if(ml_lluvia > 0){
          cont_dias_lluvia++;
      }

   }
   //PUNTO A
   cout << "Numero de dia que se registro la mayor temperatura: " << dia_max_temp << endl;
   //PUNTO B
   amplitud = max_temp - temp_menor;
   cout << "Amplitud termica en todo el periodo: " << amplitud << " C" << endl;
   //PUNTO C
   cout << "Cantidad de dias con neblina: " << cont_dias_neblina << endl;
   //PUNTO D
   if(cont_dias_lluvia > 7){
      cout << "Quincena lluviosa";
   }
   else if(cont_dias_lluvia >= 5){
      cout << "Quincena humeda";
   }
   else{
      cout << "Quincena seca";
   }



   return 0;
}
