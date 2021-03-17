
//multiplicacion factorial

#include<iostream>
#include<stdlib.h>

using namespace std;

/*int main(){
	
	int numero,factorial=1;
	
	cout<<"digite un numero: ";
	cin>>numero;
	
	for(int i=1;i<=numero;i++){	
		factorial*=i;
	}
	
	cout<<"\n el numero factorial es: "<<factorial<<endl;
	
	system("pause");
	return 0;
}*/

//suma factorial

int main(){
	
	int numero,factorial=0;
	
	cout<<"digite un numero: ";
	cin>>numero;
	
	for(int i=1;i<=numero;i++){	
		factorial+=i;
	}
	
	cout<<"\n el numero factorial es: "<<factorial<<endl;
	
	system("pause");
	return 0;
}
