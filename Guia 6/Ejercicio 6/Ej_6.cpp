#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    const int DIEZ = 10;
    int i, numMayor, aux;
    float vec[DIEZ]= {};
    bool ordenar=false;

    for(i=0; i<DIEZ; i++)
    {
        cout << "Ingresar numero: ";
        cin >> vec[i];
        if(i==0)
        {
            numMayor = vec[i];
        }
        else if(vec[i] > numMayor)
        {
            numMayor = vec[i];
        }
    }
    //
    for(i=0; i<9; i++)
    {
        if(vec[i] == numMayor)
        {
            vec[i] = vec[i+1];
            ordenar=true;
        }
        else if(ordenar==true)
        {
            vec[i] = vec[i+1];
        }
    }
    cout << "Vector > { ";
    for(i=0; i<9; i++)
    {
        cout << vec[i] << " ";
    }
    cout << "}";



    return 0;
}
