/* Realizar un programa en computadora que imprima un menú y seleccione el 
usuario que tabla de multiplicar desea */

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num;

    cout << "ingrese el numero que desea ver su tabla de multiplicar: ";
    cin >> num;

    for (int i = 0; i <= 10; i++)
    {
        float mult = i * num;
        cout << i << "x" << num << "=" << mult << endl;
    }

    getch();
    return 0;
}