/*Se dispone de la información de los últimos 19 partidos del futbolista Diego Armando Laradona. Por cada partido se registró:
Número de partido
Minutos jugados
Tarjetas amarillas
Tarjetas rojas
Goles

Existe un registro para cada partido. Los mismos se encuentran ordenados por número de partido. Se pide calcular e informar:
La cantidad de partidos que no jugó (partidos con minutos igual a cero)
La cantidad de partidos que jugó por completo (minutos >= 90)
El promedio de tarjetas recibidas por partido.
El número de partido en el que haya convertido mayor cantidad de goles. Indicar también los goles convertidos.
La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor cantidad de partidos consecutivos en los que haya convertido.
*/

#include <iostream>
using namespace std;

int main(){

   int i, n_partido, tarjetas_amarillas, tarjetas_rojas, goles, min_jugados;

   //PUNTO A
   int cont_partidos_no_jugados=0;
   //PUNTO B
   int cont_partidos_completos=0;
   //PUNTO C
   int cont_tarjetas=0, cont_partidos_jugados=0;
   float promedio_tarjetas;
   //PUNTO D
   int cont_goles=0, n_partido_max_goles;
   bool primer_gol = false;
   //PUNTO E
   int cont_goleada_consecutiva;
   int record;


   for(i=0; i<3; i++){
      cout << "Numero de partido: ";
      cin >> n_partido;
      cout << "Minutos jugados: ";
      cin >> min_jugados;
      cout << "Tarjetas amarillas: ";
      cin >> tarjetas_amarillas;
      cout << "Tarjetas rojas: ";
      cin >> tarjetas_rojas;
      cout << "Goles: ";
      cin >> goles;

      //PUNTO A
      if(min_jugados == 0){
          cont_partidos_no_jugados++;
      }
      //PUNTO B
      if(min_jugados >= 90){
          cont_partidos_completos++;
      }
      //PUNTO C
      if(min_jugados > 0){
          cont_partidos_jugados++;
      }
      if(min_jugados > 0 && tarjetas_amarillas > 0){
          cont_tarjetas+=tarjetas_amarillas;
      }
      if(min_jugados > 0 && tarjetas_rojas > 0){
          cont_tarjetas+=tarjetas_rojas;
      }
      //PUNTO D
      if(primer_gol == false && goles > 0){
          primer_gol = true;
          n_partido_max_goles = n_partido;
          cont_goles = goles;
      }
      else if(goles > cont_goles){
          n_partido_max_goles = n_partido;
          cont_goles = goles;
      }
      //PUNTO E
      if(min_jugados > 0 && goles > 0){
          cont_goleada_consecutiva++;
      }
      else{
          record = cont_goleada_consecutiva;
          cont_goleada_consecutiva = 0;
      }
      if(cont_goleada_consecutiva > record){
          record = cont_goleada_consecutiva;
      }

   }

   //PUNTO A
   cout << "La cantidad de partidos que no jugo: " << cont_partidos_no_jugados << endl;
   //PUNTO B
   cout << "La cantidad de partidos que jugo por completo: " << cont_partidos_completos << endl;
   //PUNTO C
   promedio_tarjetas = cont_tarjetas / cont_partidos_jugados;
   cout << "Promedio de tarjetas recibidas por partido: " << promedio_tarjetas << endl;
   //PUNTO D
   cout << "El numero de partido en el que convirtio mayor racha de goles: " << n_partido_max_goles << " y sus goles fueron: " << cont_goles << endl;
   //PUNTO E
   cout << "La mayor cantidad de partidos consecutivos en los que hizo gol fue: " << record;


   return 0;
}
