/**Hacer una funci�n que reciba un vector de n�meros enteros y su tama�o y cargue cada uno de los elementos.*/

#include <iostream>
#include <clocale>

void cargarVector(int vecEnteros[], int TAM);
void mostrarVector(int vecEnteros[], int TAM);

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    const int TAM = 10;
    int vecEnteros[TAM];
    cargarVector(vecEnteros, TAM);
    cout << "Elementos cargados: ";
    mostrarVector(vecEnteros, TAM);

    return 0;
}

void cargarVector(int vecEnteros[], int TAM)
{
    int i;
    for(i=0; i<TAM; i++)
    {
        cout << "Ingresar un n�mero entero en el elemento #" << i << " : ";
        cin >> vecEnteros[i];
    }
}

void mostrarVector(int vecEnteros[], int TAM)
{
    int i;
    for(i=0; i<TAM; i++)
    {
        cout << " " << vecEnteros[i];
    }
}
