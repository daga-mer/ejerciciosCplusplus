/*escriba un programa que defina un vector de numeros y calcule la suma de sus elementos*/

#include <iostream>
#include <conio.h>

using namespace std;

/*int main(){
	
	int vector []={0,32,5,1,2};
	int suma = 0;
	
	for(int i = 0; i<5;i++){
		suma+=vector[i];
	}
	cout<<"el resultado de la suma es: "<<suma<<endl;
	getch();
	return 0;
}*/

/*escribe un programa que defina un vector de numeros y calcule la miltiplicacion acumulada de sus elementos*/

int main()
{

	int vector[] = {10, 32, 5, 1, 2};
	int mult = 1;

	for (int i = 0; i < 5; i++)
	{
		mult *= vector[i];
	}

	cout << "el acumulado de la multiplicacion es: " << mult << endl;

	getch();
	return 0;
}
