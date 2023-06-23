/*Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista y luego solicitar se ingresen esos N números.
Se pide informar cuantos son positivos*/

#include <iostream>
using namespace std;

int main(){

  int n, i, lista, c=0;
  cout << "Ingresar un N valor de lista: ";
  cin >> lista;

  for(i=0; i<lista; i++){
    cout << "Ingresar un numero: ";
    cin >> n;

    if(n > 0){
        c++;
    }
  }

  cout << "Total positivos: " << c << endl;

   return 0;
}
