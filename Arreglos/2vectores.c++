/* 7. Realice un programa que defina dos vectores de caracteres y despues 
almacene el contenido de ambos vectores de un nuevo vectore, situando en 
primer lugar los elementos del primer vector vector seguido por los 
elementos del segundo vector. muestre el contenido del nuevo vector en la
salida estandar */

#include <iostream>
#include <conio.h>
using namespace std;
/* 
int main(){

    char letras1[] = {'a','b','c','d','e'};
    char letras2[] = {'f','g','h','i','j'};
    char letras3[10];

    for (int i = 0; i < 5; i++)
    {
        letras3[i]=letras1[i];
    }
    
    for (int i = 5; i < 10; i++)
    {
        letras3[i]=letras2[i-5];
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<letras3[i]<<endl;
    }
    
    getch();
    return 0;
} */

/* 8. Hacer un programa que lea 5 numeros en un arreglo, los copie en otro 
arreglo multiplicados por 2 y muestre el segundo arreglo */

int main(){

    int numeros[] = {1,2,3,4,5};
    int numeros2[5];

    for (int i = 0; i <= 4; i++)
    {
        numeros2[i]=numeros[i];
        numeros2[i]=numeros2[i]*2;
        cout<<"su resultado es: "<<numeros2[i]<<endl;
    }    
    
    getch();
    return 0;
}