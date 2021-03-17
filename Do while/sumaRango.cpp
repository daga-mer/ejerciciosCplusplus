
//rango

#include <iostream>
#include <stdlib.h>

using namespace std;

/*int main(){
	
	int numero, suma = 0;
	
	do{
		cout<<"digite su numero: ";
		cin>>numero;
		
		if(numero>0){
			suma += numero;
		}
		
	}while(((numero<20) || (numero>30)) && (numero != 0));
	
	cout<<"\n el resultado de su suma es: "<<suma<<endl;
		
	system("pause");
	return 0;
}*/

//no pow

int main()
{

	int x, y, z=1, q=1;

	cout << "digite su numero: ";
	cin >> x;

	cout << "digite su numero al que desea elevar: ";
	cin >> y;

	while (q <= y)
	{
		z = z * x;
		q++;
		cout << z;
	}

	cout << "su valor es: " << z << endl;

	system("pause");
	return 0;
}
