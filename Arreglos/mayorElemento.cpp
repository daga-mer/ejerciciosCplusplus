/*desarrolle un programa que lea de la entrada estandar un vector de enteros y 
determine el mayor elemento del vector.*/

#include <iostream>
#include <conio.h>
using namespace std;

/* int main(){
	
	int numeros[100],n,mayor=0;
	
	
	cout<<"digite el numero de elementos para el array: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		cout<<i+1<<"digite un numero: ";
		cin>>numeros[i];
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
	}
	
	cout<<"El elemento mayor es: "<<mayor<<endl;
	
	
	getch();
	return 0;
} */

/*escribe un programa que defina un vector de numeros y calcule si existe algun 
numero en el vector cuyo valor equivalente a la suma del resto de numeros del 
vector*/

int main()
{
	int vector[5], x, n;

	cout << "por favor ingrese numero de elementos que desea usar sea menor o igual a 5: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "ingrese sus numeros: ";
		cin >> vector[i];
		vector[i];
	}
	for (int i = 1; i <= n; i++)
	{
		
		x = vector[i];
		if (vector[i]>=x)
		{
			cout<<"el mayor numero es: "<<x;
		}
	}

	system("pause");
	getch();
	return 0;
};
