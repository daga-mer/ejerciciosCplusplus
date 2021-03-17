
//suma cuadrados

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

/*int main(){
		
	int suma=0,cuadrado;
	
	for(int i=1;i<=10;i++){
	
		cuadrado = i * i;
		suma += cuadrado; 
	}
	
	cout<<"su suma es igual a: "<<suma<<endl;
	
	getch();
	return 0;
}*/

//temperatura

int main(){
	
	float temp, baja=9999, alta=-9999, med=0;
	
	for(int i=4;i<=24;i+=4){
		cout<<"La temperatura de "<<i<<" hs es: ";
		cin>>temp;
		med += temp;
		if(temp>alta){
			alta = temp;
		}
		if(temp<baja){
			baja = temp;
		}
	}
	cout<<"La temperatura media es: "<<med/6<<endl;
	cout<<"La temperatura mas baja es: "<<baja<<endl;
	cout<<"La temperatura mas alta es: "<<alta<<endl;
	getch();
	return 0;
}
