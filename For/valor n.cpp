
//suma valor n 

#include<iostream>
#include<conio.h>

using namespace std;

/*int main(){
	
	int n, suma=0;
	
	cout<<"digite el numero de elementos: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		
		suma+=i;
	
	}
	
	cout<<"\n la suma es: "<<suma<<endl;
	
	getch();
	return 0;
}*/

//suma 2n-1

int main(){
	
	int n, suma=0;
	
	cout<<"digite el valor que desea operar: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
  		suma=(2*i)-1;
 	}
	
	cout<<"\n el resultado de su operacion es: "<<suma<<endl;
	
	getch();
	return 0;
}
