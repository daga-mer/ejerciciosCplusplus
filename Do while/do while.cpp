
//do while

#include<iostream>
#include<stdlib.h>
using namespace std;

/*int main(){
	
	int i=10;
	
	do{
		cout<<i<<endl;
		i--;
	}while(i>=1);
	
	
	system("pause");
	return 0;
}*/

int main(){
	
	int num;
	
	do{
		cout<<"digite un numero: "<<endl;
		cin>>num;
	}while((num<1) || (num<10));
	
	
	return 0;
}




