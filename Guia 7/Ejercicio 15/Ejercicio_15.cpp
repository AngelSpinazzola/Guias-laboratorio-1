/**Publicar en la cafetería del campus virtual la cantidad de números entre el 1 y 99999 que tienen más 3 que 4 pero que al menos tenga un 4 y ningún 5.*/
#include <iostream>
#include <clocale>

using namespace std;

bool descomponerEnteroYverificarCondicion(int entero);

int main(){
    setlocale(LC_ALL, "Spanish");

    int cantidad = 0;
    bool verSiCumpleCondicion;
    for(int i=1; i<=99999; i++){
        if(descomponerEnteroYverificarCondicion(i) == true){
            cantidad++;
        }
    }
    cout << cantidad;

   return 0;
}

bool descomponerEnteroYverificarCondicion(int entero){

    int i=0;
    int vecEnteros[5]={};
    int contNumeros3=0, contNumeros4=0;
    bool tuvoUn5 = false;

    while(entero > 0){
        vecEnteros[i] = entero % 10;
        entero = entero / 10;
        i++;
    }
    for(i=0; i<5; i++){
        if(vecEnteros[i] == 3){
            contNumeros3++;
        }
        if(vecEnteros[i] == 4){
            contNumeros4++;
        }
        if(vecEnteros[i] == 5){
            tuvoUn5 = true;
        }
    }
    if(contNumeros3 > contNumeros4 && contNumeros4 > 0 && tuvoUn5 == false){
        return true;
    }
    else{
        return false;
    }
}
