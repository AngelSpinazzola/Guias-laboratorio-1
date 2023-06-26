/**Hacer una función que reciba tres números enteros llamados dia, mes y hemisferio y una cadena de caracteres llamada estacion.
Asignar el nombre de la estación del año de acuerdo al día y mes y dependiendo del hemisferio.
NOTA: Hemisferio será 0 → Sur y 1 → Norte.
*/

#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void asignarNombreEstacion(int dia, int mes, int hemisferio, string &estacion);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int dia, mes, hemisferio;
    string estacion;

    //Test
    cout << "¿Dia?: ";
    cin >> dia;
    cout << "¿Mes?: ";
    cin >> mes;
    cout << "¿Hemisferio?: ";
    cin >> hemisferio;

    asignarNombreEstacion(dia, mes, hemisferio, estacion);

    cout << "Usted está en la estacion: " << estacion << endl;
    //

    return 0;
}
void asignarNombreEstacion(int dia, int mes, int hemisferio, string &estacion){

    string nombresEstaciones[4] = {"Verano","Otoño","Invierno","Primavera"};

    if(hemisferio == 0){
        if((mes == 12 && dia >= 21) || mes == 1 || mes == 2 || (mes == 3 && dia < 21)){
            estacion = nombresEstaciones[0];
            return;
        }
        if((mes == 3 && dia >= 21) || mes == 4 || mes == 5 || (mes == 6 && dia < 21)){
            estacion = nombresEstaciones[1];
            return;
        }
        if((mes == 6 && dia >= 21) || mes == 7 || mes == 8 || (mes == 9 && dia < 21)){
            estacion = nombresEstaciones[2];
            return;
        }
        else{
            estacion = nombresEstaciones[3];
            return;
        }
    }
    if(hemisferio == 1){
        if((mes == 3 && dia >= 21) || mes == 4 || mes == 5 || (mes == 6 && dia < 21)){
            estacion = nombresEstaciones[3];
            return;
        }
        if((mes == 6 && dia >= 21) || mes == 7 || mes == 8 || (mes == 9 && dia < 21)){
            estacion = nombresEstaciones[0];
            return;
        }
        if((mes == 9 && dia >= 21) || mes == 10 || mes == 11 || (mes == 12 && dia < 21)){
            estacion = nombresEstaciones[1];
            return;
        }
        else{
            estacion = nombresEstaciones[2];
            return;
        }
    }
}

