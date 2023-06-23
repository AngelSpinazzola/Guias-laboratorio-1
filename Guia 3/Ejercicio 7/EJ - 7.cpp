/*Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
El sueldo máximo.
El sueldo mínimo.
El sueldo promedio.
Cantidad de sueldos mayores a $50000.
*/

#include <iostream>
using namespace std;

int main(){

  int i, cont=0;
  float sueldo, sueldo_max, sueldo_min, acu_promedio=0;

  for(i=0; i<10; i++){
    cout << "Ingresar sueldo de empleado: ";
    cin >> sueldo;
    acu_promedio+=sueldo;

    if(i == 0){
        sueldo_max = sueldo;
        sueldo_min = sueldo;
    }
    else if(sueldo > sueldo_max){
        sueldo_max = sueldo;
    }
    else if(sueldo < sueldo_min){
        sueldo_min = sueldo;
    }
    if(sueldo > 50000){
        cont++;
    }

  }

  cout << "Sueldo maximo: " << sueldo_max << endl;
  cout << "Sueldo minimo: " << sueldo_min << endl;
  cout << "Sueldo promedio: " << acu_promedio/10 << endl;
  cout << "Cantidad de sueldos mayores a $50000: " << cont << endl;




   return 0;
}
