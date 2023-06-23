/**Hacer un programa que contenga un menú con el siguiente formato:

Menú principal
-----------------------------
1 - Ingresar medida en metros
2 - Convertir a centímetros
3 - Convertir a kilómetros
4 - Convertir a pulgadas
5 - Convertir a pies
-----------------------------
0 - Salir del programa

Ingrese opción:


Al ingresar a la opción 1, nos pedirá una medida (float) en metros que con las siguientes opciones del menú podremos mostrarla convertida a otras unidades.
El programa debe permitir al usuario ingresar a las opciones las veces que lo desee y sólo finalizará al ingresar a la opción 0.
*/

#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int opcion, metros;
    float centimetros, kilometros, pulgadas, pies;

    cout << "Menú principal" << endl;
    cout << "-----------------------------" << endl;
    cout << "1 - Ingresar medida en metros: " << endl;
    cout << "2 - Convertir a centímetros" << endl;
    cout << "3 - Convertir a kilómetros" << endl;
    cout << "4 - Convertir a pulgadas" << endl;
    cout << "5 - Convertir a pies" << endl;
    cout << "-----------------------------" << endl;
    cout << "0 - Salir del programa" << endl << endl;

    cout << "Ingrese opción: ";
    cin >> opcion;

    while(opcion != 0)
    {
        switch(opcion)
        {
        case 1:

            system("cls");
            cout << "¿Medida en metros? : ";
            cin >> metros;
            system("cls");
            break;
        case 2:
            system("cls");
            cout << "La medida de " << metros << " metros en centímetros es: " << metros*100 << " centímetros." << endl;
            system("pause");
            system("cls");
            break;

        case 3:
            system("cls");
            kilometros = (float)metros/1000;
            cout << "La medida de " << metros << " metros en kilómetros es: " << kilometros << " kilómetros." << endl;
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            cout << "La medida de " << metros << " metros en pulgadas es: " << metros*0.0254 << " pulgadas. " << endl;
            system("pause");
            system("cls");
            break;
        case 5:
            system("cls");
            cout << "La medida de " << metros << " metros en pies es: " << metros*3.28 << " pies. " << endl;
            system("pause");
            system("cls");
            break;

        }

        cout << "Menú principal" << endl;
        cout << "-----------------------------" << endl;
        cout << "1 - Ingresar medida en metros: " << endl;
        cout << "2 - Convertir a centímetros" << endl;
        cout << "3 - Convertir a kilómetros" << endl;
        cout << "4 - Convertir a pulgadas" << endl;
        cout << "5 - Convertir a pies" << endl;
        cout << "-----------------------------" << endl;
        cout << "0 - Salir del programa" << endl << endl;

        cout << "Ingrese opción: ";
        cin >> opcion;
    }


    return 0;
}
