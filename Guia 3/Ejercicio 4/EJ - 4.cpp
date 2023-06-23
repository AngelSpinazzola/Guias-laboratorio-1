/*Hacer un programa para que el usuario ingrese dos números y luego el programa muestre por pantalla los números entre el menor y el mayor de ambos.
Ejemplo:
Si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15;
Si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
*/

#include <iostream>
using namespace std;

int main(){

  int i, a, b;
  cout << "Ingresar un numero: ";
  cin >> a;
  cout << "Ingresar un numero: ";
  cin >> b;
  if(a > b){
    for(i=b; i<=a; i++){
    cout << endl << i << endl << endl;
    }
  }
  else{
    for(i=a; i<=b; i++){
    cout << endl << i << endl << endl;
    }
  }

   return 0;
}
