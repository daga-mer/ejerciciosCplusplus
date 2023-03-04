
/* 5. Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. 
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz
original*/

#include <iostream>
#include <conio.h>

using namespace std;

/* int main()
{
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingrese un numero para [" << i << "][" << j << "]";
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz original";
    cout << "\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j];
        }
        cout << "\n";
    }

    cout << "Matriz tranpuesta";
    cout << "\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[j][i];
        }
        cout << "\n";
    }

    getch();
    return 0;
} */

/* 6. Realice un programa que calcule la suma de dos matrices cuadradas de 3x3 */

int main()
{
    int matriz[3][3];
    int matriz2[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingrese un numero para [" << i << "][" << j << "]";
            cin >> matriz[i][j];
        }
    }
    cout << "\n";
    cout << "\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingrese un numero para [" << i << "][" << j << "]";
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] * matriz2[i][j] << " ";
        }
        cout << "\n";
    }

    getch();
    return 0;
}
