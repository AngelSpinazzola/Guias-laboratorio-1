/**
Una empresa que fabrica pantalones nos encargó procesar los resultados de una encuesta realizada a la población con referencia a la predilección de color de los pantalones ('N'=negro, 'A'=azul, 'B'=blanco, 'O'=otros).
Para ello se ingresan los siguiente datos para cada encuesta efectuada:
- Edad del encuestado (entre 1 y 99)
- Color elegido (N, A, B, O)
- Sexo(M o F)

El fin del lote se indica con un registro con edad igual a cero. Se pide determinar e informar:
El color más votado entre las mujeres.
Por cada década de edad, la cantidad de encuestados.

Década     Edad
0       	     1-9
1     	     10-19
2    	     20-29
…     	      …
9    	     90-99

*/
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    //DATOS ESTRUCTURA PRINCIPAL
    int negro=0, azul=0, blanco=0, otros=0, edad;
    char sexo, colorElegido;
    //DECLARO VECTOR PARA ACUMULAR COLORES DISCRIMINADO POR MUJERES
    const int COLORES = 4;
    int vecColoresVotadosPorMujeres[COLORES]= {};
    //DECLARO VECTOR PARA ACUMULAR CANTIDAD DE ENCUESTADOS DISCRIMINADO POR EDAD
    const int DECADAS = 10;
    int vecCantEncuestados[DECADAS]= {};

    //ESTRUCTURA PRINCIPAL
    cout << "Edad del encuestado (entre 1 y 99): ";
    cin >> edad;
    while(edad != 0)
    {
        cout << "Color elegido (N = negro, A = Azul, B = Blanco, O = Otros): ";
        cin >> colorElegido;
        cout << "Sexo ( M o F): ";
        cin >> sexo;

        //RESUELVO PUNTO A
        if(sexo == 'F')
        {
            switch(colorElegido)
            {
            case 'N':
                vecColoresVotadosPorMujeres[0]++;
                break;

            case 'A':
                vecColoresVotadosPorMujeres[1]++;
                break;

            case 'B':
                vecColoresVotadosPorMujeres[2]++;
                break;

            case 'O':
                vecColoresVotadosPorMujeres[3]++;
                break;
            }
        }
        //RESUELVO PUNTO B
        vecCantEncuestados[edad/10]++;

        cout << "Edad del encuestado (entre 1 y 99): ";
        cin >> edad;
    }
    //FIN ESTRUCTURA PRINCIPAL
    //MUESTRO PUNTO A
    int colorMasVotadoPorMujeres;
    string color;
    string nombreColores[COLORES]= {"NEGRO", "AZUL", "BLANCO", "OTROS"};
    for(int i=0; i<4; i++)
    {
        if(i == 0)
        {
            colorMasVotadoPorMujeres = vecColoresVotadosPorMujeres[0];
            color = nombreColores[0];
        }
        else if(vecColoresVotadosPorMujeres[i] > colorMasVotadoPorMujeres)
        {
            colorMasVotadoPorMujeres = vecColoresVotadosPorMujeres[i];
            color = nombreColores[i];
        }
    }
    cout << "PUNTO A) El color mas votado entre todas las mujeres es el: " << color << endl;
    //MUESTRO PUNTO B
    cout << "PUNTO B) Cantidad de encuestados discriminado por decada. " << endl;
    for(int i=0; i<DECADAS; i++)
    {
        if(vecCantEncuestados[i] > 0)
        {
            cout << "PUNTO B) Decada " << i << " cantidad de encuestados: " << vecCantEncuestados[i] << endl;
        }
    }

    return 0;
}
