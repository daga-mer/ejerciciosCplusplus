
//adivinar numero

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/* 
int main(){
	
	int numero, dato, contador=0;
	
	srand(time(NULL));
	
	dato=1+rand()%(100);
	
	
	do{
		
		cout<<"digite un numero: ";
		cin>>numero;
		
		if(numero>dato){
			cout<<"\n digite un numero menor \n";
		}if(numero<dato){
			cout<<"\n digite un numero mayor \n";
		}
		contador++;
	}while(numero!=dato);
	
	cout<<"\n FELICIDADES ADIVINASTE EL NUMERO \n";
	cout<<"su numero de intentos fue: "<<contador;
	
	system("pause");
	return 0; 
}
 */

/* Realice un programa que calcule la descomposicion en factores primos 
de un numero entero */

int main()
{
	int n, i = 2;
	cout << "Introduce un numero para que yo te lo descomponga en fatores primos : ";
	cin >> n;

	while (i < n)
	{
		if (n % i == 0)
		{
			n = n / i;
			cout << i << ",";
		}
		else
		{
			i++;
		}
	}
	cout <<"sus factores primos son: "<< n<<endl;
	system("pause");
	return 0;
}