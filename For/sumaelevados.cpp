
//suma valores elevados

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

/*int main(){
	
	int suma=0, elev=0, n;
	
	cout<<"digite el numero de elementos a sumar: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		
		elev = pow(2,i);
		suma += elev;
		
	}
	
	cout<<"\n la suma total es: "<<suma<<endl;
	
	system("pause");
	return 0;
}*/

//suma-resta

int main()
{
	int suma = 0, n, signo = 1;

	cout << "Digite un numero positivo: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		suma =+ (i * signo);
		signo = signo * -1;
	}

	cout << "El resultado es: " << suma << endl;

	system("pause");
	return 0;
}
