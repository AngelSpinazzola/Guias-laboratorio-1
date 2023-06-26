/**8
El dueño del gimnasio Laragym nos pide que realicemos un programa que les permita cargar todas los entrenamientos de sus 50 clientes, cada registro de entrenamiento contiene:
Numero de Entrenamiento (1 - 9999)
Cliente (101- 150)
Tipo de Entrenamiento ( 1 - 10 )
Tiempo del Entrenamiento (minutos)

Puede haber varios registros de entrenamiento por cliente. La información no se encuentra agrupada ni ordenada. El fin de la carga de entrenamientos se indica con un número de entrenamiento igual a cero, informar:
Por cada cliente, el tiempo total de entrenamiento (expresarlo en horas y minutos, ejemplo 70 minutos se expresaría 1 hora y 10 minutos).
Por cada cliente, los tipos de entrenamiento que realizó.
Por cada cada cliente y tipo de entrenamiento, la cantidad total de minutos entrenados. Sólo listar aquellos registros que sean superiores a 0.
El número de cliente que más tiempo haya entrenado.
Los tipos de entrenamiento que no se realizaron por ningún cliente.



*/
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    const int CLIENTES = 10;
    int i, c, f, numEntrenamiento, numCliente, tipoEntrenamiento, tiempoMinutos;

    //DATOS PUNTO A
    int vecMinutosEntrenamiento[50]= {};
    //DATOS PUNTO B
    bool entrenamientoPorCliente[10][50]= {};
    //DATOS PUNTO C
    int minutosEntrenamientoPorCliente[10][50]= {};
    //DATOS PUNTO E
    int entrenamientosNoRealizados[10]= {};


    cout << "Ingresar número de entrenamiento (1 - 9999): ";
    cin >> numEntrenamiento;

    while(numEntrenamiento != 0)
    {
        cout << "Ingresar número de cliente (101 - 150): ";
        cin >> numCliente;
        cout << "Ingresar tipo de Entrenamiento (1 - 10): ";
        cin >> tipoEntrenamiento;
        cout << "Ingresar minutos: ";
        cin >> tiempoMinutos;

        //RESUELVO PUNTO A
        vecMinutosEntrenamiento[numCliente-101] += tiempoMinutos;
        //RESUELVO PUNTO B
        entrenamientoPorCliente[tipoEntrenamiento-1][numCliente-101] = true;
        //RESUELVO PUNTO C
        minutosEntrenamientoPorCliente[tipoEntrenamiento-1][numCliente-101]+=tiempoMinutos;
        //RESUELVO PUNTO E
        entrenamientosNoRealizados[tipoEntrenamiento-1] = true;


        cout << "Ingresar número de entrenamiento (1 - 9999): ";
        cin >> numEntrenamiento;
    }

    cout << endl;
    //MUESTRO PUNTO A
    int horas, minutos;
    for(i=0; i<50; i++)
    {
        horas = 0;
        minutos = 0;
        if(vecMinutosEntrenamiento[i] > 0)
        {
            horas = vecMinutosEntrenamiento[i]/60;
            minutos = vecMinutosEntrenamiento[i] % 60;
            cout << "PUNTO A) Para el cliente #" << i+101 << " su tiempo total de entrenamiento fue: ";
            if(horas > 0 && minutos > 0)
            {
                cout << horas << " horas y " << minutos << " minutos" << endl;
            }
            else
            {
                if(horas > 0 && minutos <= 0)
                {
                    cout << horas << " horas" << endl;
                }
                else if(minutos > 0)
                {
                    cout << minutos << " minutos" << endl;
                }
            }
        }
    }
    //MUESTRO PUNTO B
    for(int c=0; c<50; c++)
    {
        for(int f=0; f<10; f++)
        {
            if(entrenamientoPorCliente[f][c]==true)
            {
                cout << "PUNTO B) El número de cliente #" << c+101 << " realizo el tipo de ejercicio: [" << f+1 << "]" << endl;
            }
        }
    }
    //MUESTRO PUNTO C
    for(int c=0; c<50; c++)
    {
        for(int f=0; f<10; f++)
        {
            if(minutosEntrenamientoPorCliente[f][c] > 0)
            {
                cout << "PUNTO C) Para el cliente #" << c+101 << " y entrenamiento [" << f+1 << "]" << " su tiempo fue: " << minutosEntrenamientoPorCliente[f][c] << " minutos" << endl;
            }
        }
    }
    //CALCULO Y MUESTRO PUNTO D
    int contMinutosDeEntrenamiento, minutosEntrenadosMayor, numeroClienteMayorTiempoEntrenando;
    bool primerClienteDetectado = false;

    for(int c=0; c<50; c++)
    {
        //RE-INICIALIZO PARA CONTAR LOS MINUTOS POR CLIENTE EN CADA VUELTA DEL FOR.
        contMinutosDeEntrenamiento = 0;
        for(int f=0; f<10; f++)
        {
            contMinutosDeEntrenamiento+=minutosEntrenamientoPorCliente[f][c];
        }
        if(primerClienteDetectado == false)
        {
            primerClienteDetectado = true;
            numeroClienteMayorTiempoEntrenando = c+101;
            minutosEntrenadosMayor = contMinutosDeEntrenamiento;
        }
        else if(contMinutosDeEntrenamiento > minutosEntrenadosMayor)
        {
            minutosEntrenadosMayor = contMinutosDeEntrenamiento;
            numeroClienteMayorTiempoEntrenando = c+101;
        }
    }
    cout << "PUNTO D) El cliente numero de cliente #" << numeroClienteMayorTiempoEntrenando << " es el que entreno mas tiempo que todos." << endl;
    //MUESTRO PUNTO E
    for(int v=0; v<10; v++)
    {
        if(entrenamientosNoRealizados[v] == false)
        {
            cout << "PUNTO E) El tipo de entrenamiento #" << v+1 << " no se realizó por ningun cliente." << endl;
        }
    }

    return 0;
}
