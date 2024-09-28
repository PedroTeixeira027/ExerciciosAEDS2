#include <iostream>
#include <locale.h>

using namespace std;

void DecToBin(int n);

int main()
{
	setlocale(LC_ALL,"portuguese");
	int decimal;
	cout << "Digite u número decimal: ";
	cin >> decimal;
	DecToBin(decimal);
	return 0;
}

void DecToBin(int n){
	int resto = 1;
	if(n>1){
		resto = n%2;
		DecToBin(n/2);
	}
	cout << resto;
}