#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int codigo1, numero1, codigo2, numero2;
	float valor1, valor2;
	cin >> codigo1;
	cin >> numero1;
	cin >> valor1;
	cin >> codigo2;
	cin >> numero2;
	cin >> valor2;
	printf("VALOR A PAGAR: R$ %.2f\n", numero1*valor1+numero2*valor2 );
}
