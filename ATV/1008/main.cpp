#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int a,b;
	double c,salario;
	cin >> a;
	cin >> b;
	cin >> c;
	salario = b * c;
	printf("NUMBER = %d\n", a);
	printf("SALARY = U$ %.2f\n", salario);
}
