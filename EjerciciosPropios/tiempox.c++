/* realice un contador de tiempo segun determine el usuario */

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int hor, min, sec;
    int horR, minR, secR;

    cout << "ingrese cuantas horas desea contar: ";
    cin >> hor;

    cout << "ingrese cuantos minutos desea contar: ";
    cin >> min;

    cout << "ingrese cuantos segundos desea contar: ";
    cin >> sec;

    for (int i = 0; i <= sec; i++)
    {
        cout << horR << ":" << minR << ":" << secR;
        if (secR>=60)
        {
            
        }
        

        for (int i = 0; i <= min; i++)
        {
            cout << horR << ":" << minR << ":" << secR;

            for (int i = 0; i <= hor; i++)
            {
                cout << horR << ":" << minR << ":" << secR;

                horR += horR;
            }
            minR += minR;
        }
        secR += secR;
    }

    getch();
    return 0;
}
