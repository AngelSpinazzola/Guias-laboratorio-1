/*Hacer un programa para ingresar una lista de 10 n�meros, luego informar cu�ntos son positivos, cu�ntos son negativos, y cu�ntos iguales a cero.*/

#include <iostream>
using namespace std;

int main(){

  int i,n;
  int pos=0, cero=0, neg=0;
  for(i=0; i<10; i++){
    cout << "Ingresar un numero: ";
    cin >> n;

    if(n > 0){
        pos++;
    }
    else if(n == 0){
        cero++;
    }
    else{
        neg++;
    }
  }

  cout << "Positivos: " << pos << endl;
  cout << "Negativos: " << neg << endl;
  cout << "Cero: " << cero << endl;


   return 0;
}
