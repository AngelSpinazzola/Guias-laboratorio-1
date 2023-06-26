#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    const int EMPLEADOS = 5;
    int i, categoria, antiguedad, cat1=0, cat2=0, cat3=0;
    float totalSueldoCategoria1=0, totalSueldoCategoria2=0, totalSueldoCategoria3=0, sueldoPromedio;
    float sueldoMaximoCat1, sueldoMaximoCat2, sueldoMaximoCat3, sueldoParcialCategoria1, sueldoParcialCategoria2, sueldoParcialCategoria3, categoriaMax;

    for(i=0; i<EMPLEADOS; i++)
    {
        cout << "Categoría (1 a 3): ";
        cin >> categoria;
        cout << "Antigüedad: ";
        cin >> antiguedad;

        switch(categoria)
        {
        case 1 :
            cat1++;
            totalSueldoCategoria1+= 38000 + (antiguedad * 1200);
            sueldoParcialCategoria1 = 38000 + (antiguedad * 1200);
            break;
        case 2:
            cat2++;
            totalSueldoCategoria2+= 70000 + (antiguedad * 1200);
            sueldoParcialCategoria2 = 70000 + (antiguedad * 1200);
            break;
        case 3:
            cat3++;
            totalSueldoCategoria3+= 105000 + (antiguedad * 1200);
            sueldoParcialCategoria3 = 105000 + (antiguedad * 1200);
            break;
        }
        if(i == 0)
        {
            if(categoria == 1)
            {
                sueldoMaximoCat1 = totalSueldoCategoria1;
                categoriaMax = categoria;
            }
            else
            {
                if(categoria == 2)
                {
                    sueldoMaximoCat2 = totalSueldoCategoria2;
                    categoriaMax = categoria;
                }
                else
                {
                    sueldoMaximoCat3 = totalSueldoCategoria3;
                    categoriaMax = categoria;
                }
            }
        }
        else
        {
            if(sueldoParcialCategoria1 > sueldoMaximoCat1)
            {
                sueldoMaximoCat1 = sueldoParcialCategoria1;
                categoriaMax = categoria;
            }
            if(sueldoParcialCategoria2 > sueldoMaximoCat2)
            {
                sueldoMaximoCat2 = sueldoParcialCategoria2;
                categoriaMax = categoria;
            }
            if(sueldoParcialCategoria3 > sueldoMaximoCat3)
            {
                sueldoMaximoCat3 = sueldoParcialCategoria3;
                categoriaMax = categoria;
            }
        }
    }
    cout << "Cantidad de empleados por categoría" << endl;
    cout << "Categoría 1: " << cat1 << endl;
    cout << "Categoría 2: " << cat2 << endl;
    cout << "Categoría 3: " << cat3 << endl;
    cout << "Total de sueldos $ para cada categoría" << endl;
    cout << "Categoría 1 $:" << totalSueldoCategoria1 << endl;
    cout << "Categoría 2 $:" << totalSueldoCategoria2 << endl;
    cout << "Categoría 3 $:" << totalSueldoCategoria3 << endl;
    sueldoPromedio = (totalSueldoCategoria1 + totalSueldoCategoria2 + totalSueldoCategoria3) / EMPLEADOS;
    cout << "Sueldo promedio: " << sueldoPromedio << endl;

    if(sueldoMaximoCat1 > sueldoMaximoCat2 && sueldoMaximoCat1 > sueldoMaximoCat3)
    {
        cout << "Sueldo máximo: " << sueldoMaximoCat1 << " y su categoría es: " << categoriaMax;
    }
    else
    {
        if(sueldoMaximoCat2 > sueldoMaximoCat1 && sueldoMaximoCat2 > sueldoMaximoCat3)
        {
            cout << "Sueldo máximo: " << sueldoMaximoCat2 << " y su categoria es: " << categoriaMax;
        }
        else
        {
            cout << "Sueldo máximo: " << sueldoMaximoCat3 << " y su categoría es: " << categoriaMax;
        }
    }

    return 0;
}
