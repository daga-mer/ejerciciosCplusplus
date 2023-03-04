/* 3. Hcer una matriz de tipo entero de 2*2, llenarla de numeros y luego copiar 
su contenido a otra matriz */

#include <iostream>
#include <conio.h>

using namespace std;

/* int main()
{
    int num[2][2]= {{1,2},{3,4}};
    int num2[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            num2[i][j]=num[i][j];
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j= 0; j < 2; j++)
        {
            cout<<num2[i][j];
        }
        cout<<"\n";
    }


    getch();
    return 0;
}  */

/* Hacer una matriz preguntando al usuario el numero de filas y columnas, 
llenarla de numeros aleatorios, copiar el contenido a otra matriz y por ultimo 
mostrarla en pantalla */

int main()
{
    int fil, col;

    cout << "Ingrese el numero de filas: ";
    cin >> fil;

    cout << "ingrese el numero de columnas: ";
    cin >> col;

    int matriz[100][100];

    for (int i = 0; i <= fil; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            matriz[i][j] = rand();
        }
    }

    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matriz[i][j]<<" ";
        }
        cout << "\n";
    }

    getch();
    return 0;
}