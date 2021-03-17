
//fibonacci

#include <iostream>
#include <stdlib.h>
using namespace std;

/*int main(){
	
	int n,x=0,y=1,z=1;
	
	cout<<"digite un numero de elementos: ";
	cin>>n;
	
	cout<<"1 ";
	
	for(int i=1;i<n;i++){
		
		z = x + y;
		cout<<z<<" ";
		
		x=y;
		y=z;
	}
	
	cout<<"\n";
	system("pause");
	return 0; 
}*/

//alumnos

int main()
{
	int n, i, not1, not2, not3, todos = 0, uno = 0, ultimo = 0;

	for (i = 1; i <= 5; i++)
	{
		cout << "Alumno " << i << endl;
		cout << "Ingrese la nota del primer examen: ";
		cin >> not1;
		cout << "Ingrese la nota del segundo examen: ";
		cin >> not2;
		cout << "Ingrese la nota del tercer examen: ";
		cin >> not3;

		if (not1 >= 7 && not2 >= 7 && not3 >= 7)
		{
			todos++;
		}
		else if (not1 >= 7 || not2 >= 7 || not3 >= 7)
		{
			uno++;
		}
		if (not1 < 7 && not2 < 7 && not3 >= 7)
		{
			ultimo++;
		}
	}

	cout << "Cantidad de alumnos que aprobaron todos los examenes: " << todos << endl;
	cout << "Cantidad de alumnos que aprobaron al menos un examen: " << uno << endl;
	cout << "Cantidad de alumnos que aprobaron solo el ultimo examen: " << ultimo << endl;

	system("pause");
	return 0;
}
