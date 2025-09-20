#include <iostream>
using namespace std;

void sequenciaum (int numero, int &cont){
	int acumulador1=0, acumulador2=0;
	cont=1;
	
	acumulador2=numero;
	cout << acumulador2 << " ";
	while (acumulador2!=1){
			if (acumulador2%2==0){
			acumulador1=acumulador2/2;
			acumulador2=acumulador1;
		}
			else if ((acumulador2%2)!=0){
			acumulador1=acumulador2*3+1;
			acumulador2=acumulador1;
		}
		
		cout << acumulador2 << " ";
		
		cont ++;
	}
 }
	
int main (){
	int numero, cont;
	cin >> numero;
	
	sequenciaum (numero, cont);
	cout << endl << cont;
	
	return 0;
}
