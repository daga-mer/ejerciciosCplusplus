//ejercicio edad

#include<iostream>

using namespace std;


/*int main(){
	
	int edad;
	
	cout<<"ingrese su edad: ";
	cin>>edad;
	
	
	if((edad>=18)and(edad<=25)){
		
		cout<<"su edad esta en el rango de 18-25";
		
	}
	else{
		
		cout<<"su edad no esta en el rango de 18-25";
	
	}
	
	return 0;
}*/

//ejercicio 2

int main(){
	
	int num1,num2,num3,num4;
	
	cout<<"ingrese el primer numero: ";
	cin>>num1;
	 
	cout<<"ingrese el segundo numero: ";
	cin>>num2; 

	cout<<"ingrese el tercer numero: ";
	cin>>num3; 
	
	cout<<"ingrese un cuarto numero: ";
	cin>>num4; 
	
	if(num4==num1){
		
		cout<<"su cuarto numero coincide con: "<<num1;
		
	}else if(num4==num2){
		cout<<"su cuarto numero coincide con: "<<num2;
	}
	else if(num1==num3){
		cout<<"su cuarto numero coincide con: "<<num3;
	}
	else{
		cout<<"su cuarto numero no coincide con ningun numero ";
	}
	return 0;
	
}

