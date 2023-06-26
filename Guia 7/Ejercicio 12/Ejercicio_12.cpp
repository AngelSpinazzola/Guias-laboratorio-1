/**Hacer una función que reciba un número entero y determine si el mismo es un número primo de Sophie Germain. Debe devolver verdadero si lo es y falso si no lo es.
NOTA: En teoría de números, se dice que un número natural es un número primo de Sophie Germain, si el número n es primo y 2*n+1 también lo es.
Ejemplo:
El número 2 es número primo de Sophie Germain porque:
2 es primo
2*2+1 → 5 es primo.
*/
#include <iostream>
#include <clocale>

using namespace std;

bool verSiEsPrimoDeSophieGermain(int numero);

int main(){
   setlocale(LC_ALL, "Spanish");

   int numero;
   bool respuesta;
   cin >> numero;

   respuesta = verSiEsPrimoDeSophieGermain(numero);
   cout << respuesta;

   return 0;
}

bool verSiEsPrimoDeSophieGermain(int numero){
    int i, contDiv=0;
    int segundoPosiblePrimoAEvaluar;

    for(i=1; i<=numero; i++){
        if(numero % i == 0){
            contDiv++;
        }
    }
    if(contDiv == 2){
        segundoPosiblePrimoAEvaluar = (2 * numero) + 1;
        contDiv = 0;
        for(i=1; i<=segundoPosiblePrimoAEvaluar; i++){
            if(segundoPosiblePrimoAEvaluar % i == 0){
                contDiv++;
            }
        }
    }
    if(contDiv == 2){
        return true;
    }
    else{
        return false;
    }
}
