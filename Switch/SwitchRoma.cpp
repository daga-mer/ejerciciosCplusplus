
//ejercicio romanos

#include <iostream>

using namespace std;


/*int main(){
	
	int num,uni,dec,cen,mil;
	
	cout<<"ingrese el valor a convertir: ";
	cin>>num;
	
	uni = num%10; num /= 10;
	dec = num%10; num /= 10;
	cen = num%10; num /= 10;
	mil = num%10; num /= 10;
	
	switch(mil){
		
		case 1: cout<<"M"; break;
		case 2: cout<<"MM"; break;
		case 3: cout<<"MMM"; break;
	}
	
	switch(cen){
		
		case 1: cout<<"C"; break;
		case 2: cout<<"CC"; break;
		case 3: cout<<"CCC"; break;
		case 4: cout<<"CD"; break;
		case 5: cout<<"D"; break;
		case 6: cout<<"DC"; break;
		case 7: cout<<"DCC"; break;
		case 8: cout<<"DCCC"; break;
		case 9: cout<<"CM"; break;
	}
	
	switch(dec){
		
		case 1: cout<<"X"; break;
		case 2: cout<<"XX"; break;
		case 3: cout<<"XXX"; break;
		case 4: cout<<"XL"; break;
		case 5: cout<<"L"; break;
		case 6: cout<<"LX"; break;
		case 7: cout<<"LXX"; break;
		case 8: cout<<"LXXX"; break;
		case 9: cout<<"XC"; break;
	}
	
	switch(uni){
		
		case 1: cout<<"I"; break;
		case 2: cout<<"II"; break;
		case 3: cout<<"III"; break;
		case 4: cout<<"IV"; break;
		case 5: cout<<"V"; break;
		case 6: cout<<"VI"; break;
		case 7: cout<<"VII"; break;
		case 8: cout<<"VIII"; break;
		case 9: cout<<"IX"; break;
	}
	
	
	return 0;
}*/

//meses

int main(){

	int mes;
	
	cout<<"ingreseun numero";
	cin>>mes;
	
	switch(mes){
		
		case 1: cout<<"enero"; break;
		case 2: cout<<"febrero"; break;
		case 3: cout<<"marzo"; break;
		case 4: cout<<"abril"; break;
		case 5: cout<<"mayo"; break;
		case 6: cout<<"junio"; break;
		case 7: cout<<"julio"; break;
		case 8: cout<<"agosto"; break;
		case 9: cout<<"septiembre"; break;
		case 10: cout<<"obtubre"; break;
		case 11: cout<<"noviembre"; break;
		case 12: cout<<"diciembre"; break;
	}
	
	return 0;
}

