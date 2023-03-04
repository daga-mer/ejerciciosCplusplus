//calificacion

#include <iostream>
#include <math.h>

using namespace std;//siempre necesario

/*int main(){
	
	float practica, teorica, participacion,total=0;
	
	cout<<"digite la nota de la practica: ";
	cin>>practica;
	
	cout<<"digite la nota de la teoria: ";
	cin>>teorica;
	
	cout<<"digite la nota de la participacion: ";
	cin>>participacion;
	
	
	practica *= 0.30;
	teorica *= 0.60;
	participacion *= 0.10;
	
	total = practica + teorica + participacion;
	
	cout<<"\n su nota final es: "<<total;
	
	return 0;
}*/

//ejercicio

int main(){
	
	float a,b,c=0;
	
	cout<<"ingrese el valor del cateto a: ";
	cin>>a;
	
	cout<<"ingrese el valor del cateto b: ";
	cin>>b;
	
	c = ((a*a)+(b*b));
	
	cout<<"la hipotenusa es: "<<c;
	
	return 0;
}

