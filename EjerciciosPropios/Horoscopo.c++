// horoscopo con if

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int dia, mes;

    cout << "ingrese el numero de su dia de nacimiento menor o igual a 29: ";
    cin >> dia;

    cout << "ingrese el numero de su mes de nacimiento: ";
    cin >> mes;

    if (dia <= 29)
    {
        if (dia == 21 && mes == 3 || mes == 4 && dia <= 20)
        {
            cout << "su simbolo es Aries";
        }
        else if (dia == 21 && mes == 4 || mes == 5 && dia <= 20)
        {
            cout << "su simbolo es tauro";
        }
        else if (dia == 21 && mes == 5 || mes == 6 && dia <= 20)
        {
            cout << "su simbolo es G" << (char)138 << "minis";
        }
        else if (dia == 21 && mes == 6 || mes == 7 && dia <= 20)
        {
            cout << "su simbolo es C" << (char)133 << "ncer";
        }
        else if (dia == 21 && mes == 7 || mes == 8 && dia <= 20)
        {
            cout << "su simbolo es Leo";
        }
        else if (dia == 21 && mes == 8 || mes == 9 && dia <= 20)
        {
            cout << "su simbolo es Virgo";
        }
        else if (dia == 21 && mes == 9 || mes == 10 && dia <= 20)
        {
            cout << "su simbolo es Libra";
        }
        else if (dia == 21 && mes == 10 || mes == 11 && dia <= 20)
        {
            cout << "su simbolo es Escorpio";
        }
        else if (dia == 21 && mes == 11 || mes == 12 && dia <= 20)
        {
            cout << "su simbolo es Sagitario";
        }
        else if (dia == 21 && mes == 12 || mes == 1 && dia <= 20)
        {
            cout << "su simbolo es Capricornio";
        }
        else if (dia == 21 && mes == 1 || mes == 2 && dia <= 20)
        {
            cout << "su simbolo es Acuario";
        }
        else if (dia == 21 && mes == 2 || mes == 3 && dia <= 20)
        {
            cout << "su simbolo es Piscis";
        }
    }else
    {
        cout<<"su numero de dia no es admisible, reinicie el programa.";
    }
    

    getch();
    return 0;
}
