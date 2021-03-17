
//cajero

#include<iostream>
#include<math.h>

using namespace std;

/*
int main(){
	
	int saldoin = 1000, opc;
	float entra, saldo=0, retiro;
	
	cout<<"\t Bienvenido a su cajero virtual"<<endl;
	cout<<"1. ingresar dinero a la cuenta"<<endl;
	cout<<"2. retirar dinero"<<endl;
	cout<<"3. salir"<<endl;
	cout<<"opcion: "<<endl;
	cin>>opc;
	
	switch(opc){
		
		case 1: 
			cout<<"digite la cantidad de dinero que desea ingresar: ";
			cin>>entra;
			
			saldo = saldoin + entra;
			cout<<"dinero que se encuentra en la cuenta: "<<saldo;break;
		case 2:
			cout<<"digite la cantidad de dinero que va a retirar: ";
			cin>>retiro;
			if(retiro>saldoin){
				cout<<"no posee la cantidad de dinero que desea retirar";
			}
			else{
				
				saldo=saldoin-retiro;
				cout<<"dinero que se encuentra en la cuenta: "<<saldo;
			}
		case 3:break;		
	}
	
	
	return 0;
	
}*/


//menu numero

int main(){
	
	int numero, opc;
	
	cout<<"ingrese un numero: "<<endl;
	cin>>numero;
	
	cout<<"1. cubo del numero"<<endl;
	
	cout<<"2. par o impar"<<endl;	
	
	cout<<"3. salir"<<endl;
	
	cout<<"opcion numero: "<<endl;
	
	cin>>opc;
	
	
	
	
	switch(opc){
	
		case 1: cout<<pow(numero,3);break;
		case 2:
			
			if(numero%2==0){
		
				cout<<"el numero ingresado es par ";
		
			}
			else{
		
			cout<<"el numero es impar ";
		
			}break;
		case 3:break;
	
	}
	
	
	system("pause");
	return 0;
}
