
//ejercicio

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

/*int main(){
	
	int numero;
	
	
	do{
		cout<<"ingrese un numero entre 1-10"<<endl;
		cin>>numero;
	}while((numero<1) || (numero>10));
	
	
	for(int i=1;i<=20;i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	
	
	system("pause");
	return 0;
}*/

//tarea

int main(){
	
 int num,sum;
 	do{
  	cout<<"Introduzca un numero: ";cin>>num;
  	if(num>0){
   	sum++;
  	}
 	}while(num!=0);
 
 	cout<<sum<<" numeros introducidos son mayores que 0";
	getche();
	return 0;
}


