/*Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
El legajo del empleado con mayor sueldo
*/

#include <iostream>
using namespace std;

int main(){

   int i, legajo, legajo_max;
   float sueldo, sueldo_max;

   for(i=0; i<10; i++){
    cout << "Ingresar legajo: ";
    cin >> legajo;
    cout << "Ingresar sueldo: ";
    cin >> sueldo;

    if(i==0){
        sueldo_max = sueldo;
        legajo_max = legajo;
    }
    else if(sueldo > sueldo_max){
        legajo_max = legajo;
        sueldo_max = sueldo;
    }

   }

   cout << "Legajo del empleado con mayor sueldo: " << legajo_max << endl;

   return 0;
}
