/*escribe un programa que lea la entrada estandar un vector con sus numeros y muestre en la salida 
estandar los numeros del vector con sus indices asociados */

#include <iostream>
#include <conio.h>
using namespace std;

/*
int main (){
	int vector[10], n;
	
	
	cout<<"digite el numero de elementos de va a tener el arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"digite sus numeros: ";
		cin>>vector[i];
	}
	
	
	
	for(int i=0;i<n;i++){
		cout<<i<<"->"<<vector[i]<<endl;
	}
	
	getch();
	return 0;
}
*/

/*escriba un programa que defina un vector de numeros y muestre la salida 
estandar el vector en orden inverso del ultimo al primer elemento*/

int main()
{
	int vector[10], n;

	cout << "digite el numero de elementos de va a tener el arreglo: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "digite sus numeros: ";
		cin >> vector[i];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		cout << i << "->" << vector[i] << endl;
	}

	getch();
	return 0;
}
