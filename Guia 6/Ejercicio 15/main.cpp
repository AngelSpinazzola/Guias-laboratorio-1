/**Hacer un programa que permita cargar un vector de 5 números enteros todos distintos entre sí y otro vector de 10 números todos distintos entre sí.
Luego de cargarlos, generar un tercer vector llamado v_interseccion que contenga los valores en común entre los dos vectores.*/

#include <iostream>
#include <clocale>
#include "funciones.h"

using namespace std;

int main(){
   setlocale(LC_ALL, "Spanish");

   const int CINCO = 5;
   const int DIEZ = 10;
   const int QUINCE = 15;
   int vectorDeCinco[CINCO];
   int vectorDeDiez[DIEZ];
   int v_interseccion[QUINCE]={};

   cargarVector(vectorDeCinco, CINCO);
   cargarVector(vectorDeDiez, DIEZ);
   generarInterseccion(vectorDeCinco, vectorDeDiez, v_interseccion);
   mostrarValoresEnComun(v_interseccion);


   return 0;
}
