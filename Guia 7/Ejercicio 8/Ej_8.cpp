/**Hacer una función que reciba un un vector de carácteres y devuelva la cantidad de caracteres del mismo hasta el '\0'. Asumir que el vector dispone de un '\0'.

NOTA: No confundir un string con un vector de cadenas de caracteres. Los mismos se declaran y se utilizan de maneras distintas:
char mi_vector_caracteres[100]; // Un vector de caracteres
string mi_cadena_caracteres; // Un string o cadena de caracteres
*/

#include <iostream>
#include <clocale>

int ver_cantidad_caracteres(char vec[], int TAM);

using namespace std;

int main(){
   setlocale(LC_ALL, "Spanish");

   const int TAM = 10;
   int cantidadCaracteres;
   char mi_vector_caracteres[TAM] = {'H','O','L','A'} ;

   cantidadCaracteres = ver_cantidad_caracteres(mi_vector_caracteres, TAM);

   cout << cantidadCaracteres;

   return 0;
}

int ver_cantidad_caracteres(char vec[], int TAM)
{
    int i, cantidad=0;
    char caracter;

    for(i=0; i<TAM; i++)
    {
         if(vec[i] != '\0')
         {
             cantidad++;
         }
    }

    return cantidad;
}


