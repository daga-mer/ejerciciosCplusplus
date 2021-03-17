/* progrma para saber si un a"<<(char)164<<"o es bisiesto */

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    float ab;
    cout  << "ingrese el a"<<(char)164<<"o para saber si es bisiesto: ";
    cin >> ab;

    if (ab / 4 == 0)
    {
        if (ab / 100 == 0)
        {
            if (ab / 400 == 0)
            {
                cout  << "El a"<<(char)164<<"o es un a"<<(char)164<<"o bisiesto (tiene 366 d"<<(char)141<<"as).";
            }
            else
            {
                cout  << "El a"<<(char)164<<"o no es un a"<<(char)164<<"o bisiesto (tiene 365 d"<<(char)141<<"as)";
            }
        }
        else
        {
            cout  << "El a"<<(char)164<<"o no es un a"<<(char)164<<"o bisiesto (tiene 365 d"<<(char)141<<"as)";
        }
    }
    else
    {
        cout  << "El a"<<(char)164<<"o no es un a"<<(char)164<<"o bisiesto (tiene 365 d"<<(char)141<<"as)";
    }

    
    getch();
    return 0;
}
