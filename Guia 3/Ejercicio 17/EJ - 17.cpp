/*Una estación meteorológica registró una muestra climática de los últimos 15 días. Por cada día registró:
Número de día (entero)
Temperatura (float)
Milímetros de lluvia (float)
Visibilidad en km (float)

Hay un registro por cada día. La información se encuentra ordenada por día. Se pide calcular e informar:
El número de día que se haya registrado la temperatura máxima.
La amplitud térmica de todo el período.
La cantidad de días con neblina.
Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia. Mostrar "Quincena húmeda" si llovió al menos un tercio de los días. De lo contrario mostrar "Quincena seca".

NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima.
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
