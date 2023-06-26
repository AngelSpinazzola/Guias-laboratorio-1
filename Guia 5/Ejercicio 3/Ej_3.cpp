#include <iostream>
#include <clocale>

using namespace std;

int main(){
   setlocale(LC_ALL, "Spanish");

   //Estructura principal
   const int EMPLEADOS = 50;
   const int DIAS = 3;
   int i, x, numLegajo, hsIngreso, hsSalida, cantHorasATrabajarSemanal;

   //A
   int empleadoLegajoFalto;
   bool falto;
   //B
   int acu_horas_trabajadas;



   for(i=1; i<=EMPLEADOS; i++)
   {
       cout << "Numero de legajo: ";
       cin >> numLegajo;
       cout << "Cantidad de horas teóricas a trabajar por semana: ";
       cin >> cantHorasATrabajarSemanal;
       falto = false;
       for(x=1; x<=DIAS; x++)
       {
           cout << "Hora de ingreso: ";
           cin >> hsIngreso;
           cout << "Hora de salida: ";
           cin >> hsSalida;

           //A
           if(hsIngreso == 0 && hsSalida == 0)
           {
               empleadoLegajoFalto = numLegajo;
               falto = true;
           }
           //B
           acu_horas_trabajadas+=(hsSalida-hsIngreso);
       }
       //A
       if(falto == true)
       {
           cout << "El legajo del empleado que falto algún dia de la semana es: " << empleadoLegajoFalto << endl;
       }
       //B
       if(acu_horas_trabajadas == cantHorasATrabajarSemanal)
       {
           cout << "Trabajo las horas justas" << endl;
       }
       if(acu_horas_trabajadas < cantHorasATrabajarSemanal)
       {
           cout << "Trabajo menos" << endl;
       }
       if(acu_horas_trabajadas > cantHorasATrabajarSemanal)
       {
           cout << "Trabajo de mas" << endl;
       }
   }

   return 0;
}
