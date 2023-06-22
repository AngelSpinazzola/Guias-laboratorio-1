/*Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.*/

#include <iostream>
using namespace std;

int main(){

   int horas_trabajadas, valor_hora;

   cout << "Ingresar horas trabajadas por le operario: " << endl;
   cin >> horas_trabajadas;
   cout << "Ingresar valor de hora trabajadas: " << endl;
   cin >> valor_hora;
   cout << "El sueldo del operario es: " << horas_trabajadas*valor_hora << endl;

   return 0;
}
