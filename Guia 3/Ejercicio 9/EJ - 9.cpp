/*Hacer un programa para ingresar una lista 10 n�meros e informar el m�ximo de los negativos y el m�nimo de los positivos. Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24.
M�ximo Negativo: -3.
M�nimo Positivo: 2.
*/

#include <iostream>
using namespace std;

int main(){

  int i, n;
  int max_neg, min_pos;
  bool primer_neg=false, primer_pos=false;

  for(i=0; i<10; i++){
    cout << "Ingresar un numero: ";
    cin >> n;

    //PUNTO A
    if(primer_neg == false && n < 0){
        primer_neg = true;
        max_neg = n;
    }
    else if(n > max_neg && n < 0){
        max_neg = n;
    }
    //PUNTO B
    if(primer_pos == false && n > 0){
        primer_pos = true;
        min_pos = n;
    }
    else if(n < min_pos && n > 0){
        min_pos = n;
    }

  }

  cout << "Maximo negativo: " << max_neg << endl;
  cout << "Minimo positivo: " << min_pos << endl;

   return 0;
}
