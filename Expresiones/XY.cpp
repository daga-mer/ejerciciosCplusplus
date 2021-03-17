//ejercicio x y

#include <iostream>
#include <math.h>

using namespace std;

/*int main(){
	float x,y,rta=0;
	
	cout<<"digite el valor de x: ";
	cin>>x;
	
	cout<<"digite el valor de y: ";
	cin>>y;
	
	rta=(sqrt(x))/(pow(y,2)-1);
	
	cout<<"\n el resultado es: "<<rta;	

	return 0;
}*/

//ejercicio

int main()
{

	float a, b, c, rta = 0;

	cout << "digite el valor de a: ";
	cin >> a;

	cout << "digite el valor de b: ";
	cin >> b;

	cout << "digite el valor de c: ";
	cin >> c;

	rta = -b + sqrt(pow(b, 2) - 4 * a * c) / 2 * a;

	return 0;
}
