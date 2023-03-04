/* 1. Hacer un programa para rellenar una matriz pidiendo al usuario el número de
filas y columnas y posteriormente mostrar la matriz en pantalla */

#include <iostream>
#include <conio.h>

using namespace std;

/* int main()
{
    int nums[100][100], fil, col;

    cout << "Ingrese el numero de filas que desea para la matriz: ";
    cin >> fil;

    cout << "Ingrese el numero de columnas que desea para la matriz: ";
    cin >> col;

    for (int i = 0; i <= fil; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            cout << "Digite el valor de la posicion ["<< i <<"]["<< j <<"]";
            cin>>nums[i][j];
        }
    }

    
    for (int i = 0; i <= fil; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            cout << nums[i][j];
        }
        cout<<"\n";
    }

    getch();
    return 0;
} */

/* 2. Realice un programa que defina una matriz de 3x3 y escriba un ciclo para que
muestre la diagonal principal de la matriz */

int main()
{
    int nums[3][3], fil, col;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << "Digite el valor de la posicion [" << i << "][" << j << "]";
            cin >> nums[i][j];
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << nums[i][j];
        }
        cout << "\n";
    }

    getch();
    return 0;
}