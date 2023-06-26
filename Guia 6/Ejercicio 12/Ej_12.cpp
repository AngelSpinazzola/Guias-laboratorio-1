/**Se ingresa un lote de 24 registros donde se informa para cada provincia el nro. de zona geográfica en donde la misma está ubicada.

Cada registro contiene:
- Nro. de Provincia(1 a 24)
- Nro. de Zona de la provincia(1 a 9)

A partir de este lote se pide que se informe las zonas que abarquen más de 3 provincias distintas y cuales son esas provincias.
*/
#include <iostream>
#include <clocale>

using namespace std;

int main(){
   setlocale(LC_ALL, "Spanish");

   const int PROVINCIAS = 24;
   const int ZONA = 9;
   int numeroProvincia, zonaDeLaProvincia;

   bool matrizProvinciaPorZona[ZONA][PROVINCIAS]={};

   for(int i=0; i<24; i++)
   {
       cout << "Ingresar Nro. de provincia (1 a 24): ";
       cin >> numeroProvincia;
       cout << "Ingresar Nro. de zona de la provincia (1 a 9): ";
       cin >> zonaDeLaProvincia;

       matrizProvinciaPorZona[zonaDeLaProvincia-1][numeroProvincia-1]=true;
   }
   cout << endl;

   // RECORRO MATRIZ BOOLEANA PARA ACUMULAR Y VER CUANTAS ZONAS ABARCAN MAS DE 3 PROVINCIAS DISTINTAS.
   int acuZonaPorProvincia;
   for(int z=0; z<9; z++){
       acuZonaPorProvincia=0;
       for(int f=0; f<24; f++){
           if(matrizProvinciaPorZona[z][f] == true){
            acuZonaPorProvincia++;
           }
       }
       if(acuZonaPorProvincia > 3){
           cout << "El Nro. de zona #" << z+1 << " abarca mas de 3 provincias distintas, las cuales son" << endl;
           for(int j=0; j<24; j++){
               if(matrizProvinciaPorZona[z][j] == true){
                   cout << "Provincia #" << j+1 << endl;
               }
           }
       }
   }

   return 0;
}
