
//ejercicio 1

#include<iostream>

using namespace std;

/*int main(){
	
	char a;
	
	
	cout<<"ingrese un caracter: ";
	cin>>a;
	
	switch(a){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"es una vocal minuscula";break;
		default: cout<<"no es una vocal minuscula";
	}
	
	
	return 0;
}*/

int main(){
	
	char caracter;	
	
	cout<<"ingrese un valor: ";
	cin>>caracter;
	
	switch(caracter){
		
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"es una vocal minuscula ";break;
		
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"es una vocal mayuscula ";break;
		default: cout<<"no es una vocal ";break;
	}
	
	
	system("pause");
	return 0;
}
