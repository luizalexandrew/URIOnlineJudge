#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	string nome;
	double n1,n2, salario;
	cin >> nome;
	cin >> n1;
	cin >> n2;
	salario = n2*0.15+n1;
	printf("TOTAL = R$ %.2f\n", salario);
}
