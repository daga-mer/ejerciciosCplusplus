
//expresiones

#include <iostream>

using namespace std;//siempre necesario

/*int main(){
	
	float a,b;
	
	cout<<"ingrese el primer valor: ";
	cin>>a;
	
	cout<<"ingrese el segundo valor: ";
	cin>>b;
	
	cout.precision(2);//para redondear un valor
	cout<<"\n el resulado de su operacion es: "<<a/b+1;
	
	return 0;	
}*/

//ejercicio

int main(){
	
	float a,b,c,d;

		
	cout<<"ingrese el primer valor: ";
	cin>>a;
	
	cout<<"ingrese el segundo valor: ";
	cin>>b;
	
	cout<<"ingrese el tercer valor: ";
	cin>>c;
	
	cout<<"ingrese el cuarto valor: ";
	cin>>d;
	
	cout.precision(2);//para redondear un valor
	cout<<"\n el resulado de su operacion es: "<<a+b/c+d;
	
	return 0;	
}
