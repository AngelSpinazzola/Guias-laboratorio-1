#include <iostream>
#include <clocale>

using namespace std;

void descomponerEntero(int entero, int vectorEnteros[5]);

int main(){
    setlocale(LC_ALL, "Spanish");

    int entero = 390;
    int vectorEnteros[5]={};

    descomponerEntero(entero, vectorEnteros);

    for(int i=0; i<5; i++){
        cout << vectorEnteros[i];
    }

    return 0;
}
void descomponerEntero(int entero, int vectorEnteros[5]){

    int i=4;
    while(entero > 0){
        vectorEnteros[i] = entero % 10;
        entero = entero / 10;
        i--;
    }
}
