/**Hacer un programa que contenga un men� con el siguiente formato:

Men� principal
-----------------------------
1 - Ingresar medida en metros
2 - Convertir a cent�metros
3 - Convertir a kil�metros
4 - Convertir a pulgadas
5 - Convertir a pies
-----------------------------
0 - Salir del programa

Ingrese opci�n:


Al ingresar a la opci�n 1, nos pedir� una medida (float) en metros que con las siguientes opciones del men� podremos mostrarla convertida a otras unidades.
El programa debe permitir al usuario ingresar a las opciones las veces que lo desee y s�lo finalizar� al ingresar a la opci�n 0.
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

    cout << "Men� principal" << endl;
    cout << "-----------------------------" << endl;
    cout << "1 - Ingresar medida en metros: " << endl;
    cout << "2 - Convertir a cent�metros" << endl;
    cout << "3 - Convertir a kil�metros" << endl;
    cout << "4 - Convertir a pulgadas" << endl;
    cout << "5 - Convertir a pies" << endl;
    cout << "-----------------------------" << endl;
    cout << "0 - Salir del programa" << endl << endl;

    cout << "Ingrese opci�n: ";
    cin >> opcion;

    while(opcion != 0)
    {
        switch(opcion)
        {
        case 1:

            system("cls");
            cout << "�Medida en metros? : ";
            cin >> metros;
            system("cls");
            break;
        case 2:
            system("cls");
            cout << "La medida de " << metros << " metros en cent�metros es: " << metros*100 << " cent�metros." << endl;
            system("pause");
            system("cls");
            break;

        case 3:
            system("cls");
            kilometros = (float)metros/1000;
            cout << "La medida de " << metros << " metros en kil�metros es: " << kilometros << " kil�metros." << endl;
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

        cout << "Men� principal" << endl;
        cout << "-----------------------------" << endl;
        cout << "1 - Ingresar medida en metros: " << endl;
        cout << "2 - Convertir a cent�metros" << endl;
        cout << "3 - Convertir a kil�metros" << endl;
        cout << "4 - Convertir a pulgadas" << endl;
        cout << "5 - Convertir a pies" << endl;
        cout << "-----------------------------" << endl;
        cout << "0 - Salir del programa" << endl << endl;

        cout << "Ingrese opci�n: ";
        cin >> opcion;
    }


    return 0;
}
