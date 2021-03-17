
//expresiones matematicas

#include <iostream>

using namespace std;//siempre necesario

/*int main(){
	
	float a,b,c,d,e,f;
		
	cout<<"ingrese el primer valor: ";
	cin>>a;
	
	cout<<"ingrese el segundo valor: ";
	cin>>b;
	
	cout<<"ingrese el tercer valor: ";
	cin>>c;
	
	cout<<"ingrese el cuarto valor: ";
	cin>>d;
	
	cout<<"ingrese el quinto valor: ";
	cin>>e;

	cout<<"ingrese el sexto valor: ";
	cin>>f;
	
	cout.precision(2);//para redondear un valor
	cout<<"\n el resulado de su operacion es: "<<(a+(b/c))/(d+(e/f));
	
	
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
	cout<<"\n el resulado de su operacion es: "<<a+(b/(c-d));
	
	
	return 0;
}

