/*La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 movimientos durante la semana pasada. Por cada movimiento se registró:
Número de movimiento
Día
Tipo ('E' - Extracción / 'D' - Depósito)
Importe

Existe un registro por movimiento. Se desea calcular e informar:
El saldo final de la cuenta.
El porcentaje de movimientos de extracción y el porcentaje de depósito.
El depósito de mayor importe indicando también día y número de movimiento.
La cantidad de movimientos del día 10.
*/

#include <iostream>
using namespace std;

int main(){

   int i, n_mov, dia;
   float importe;
   char tipo;

   //PUNTO A
   float saldo_final, total_extraccion=0, total_deposito=0;
   //PUNTO B
   int extraccion=0, deposito=0;
   float porcentaje_extraccion, porcentaje_deposito;
   //PUNTO C
   int dia_dep, num_mov;
   float deposito_max;
   //PUNTO D
   int mov_dia_10;

   for(i=0; i<14; i++){
      cout << "Numero de movimiento: ";
      cin >> n_mov;
      cout << "Dia: ";
      cin >> dia;
      cout << "Tipo ('E' - Extracción / 'D' - DepOsito): ";
      cin >> tipo;
      cout << "Importe: ";
      cin >> importe;

      //PUNTO B
      if(tipo == 'E'){
         extraccion++;
         total_extraccion+=importe;
      }
      else{
         deposito++;
         total_deposito+=importe;
      }
      //PUNTO C
      if(i == 0 && tipo == 'D'){
        dia_dep = dia;
        num_mov = n_mov;
        deposito_max = importe;
      }
      else if(tipo == 'D' && importe > deposito_max){
        dia_dep = dia;
        num_mov = n_mov;
        deposito_max = importe;
      }
      //PUNTO D
      if(dia == 10){
        cout << "Cantidad de movimientos del dia 10: ";
        cin >> mov_dia_10;
      }

   }

   //PUNTO A
   saldo_final = total_deposito - total_extraccion;
   cout << "Saldo final: " << saldo_final << "$ " << endl;
   //PUNTO B
   porcentaje_extraccion = (extraccion * 100) / 14;
   porcentaje_deposito = (deposito * 100) / 14;
   cout << "Porcentaje de movimientos por extraccion: " << porcentaje_extraccion << "%" << endl;
   cout << "Porcentaje de movimientos por deposito: " << porcentaje_deposito << "%" << endl;
   //PUNTO C
   cout << "Deposito de mayor importe" << endl;
   cout << "IMPORTE: " << deposito_max << endl;
   cout << "DIA: " << dia_dep << endl;
   cout << "NUMERO DE MOVIMIENTO: " << num_mov << endl;
   //PUNTO D
   cout << "Cantidad de movimientos del dia 10: " << mov_dia_10 << endl;

   return 0;
}
