/*
1- Escreva um programa que calcule a pot�ncia de um n�mero de acordo com a base e o expoente fornecidos.
Separe o c�lculo da pot�ncia em uma sub-rotina.
*/

#include <iostream>
#include <locale>

using namespace std;
int pot (int n1, int n2);

int main()
{
	setlocale (LC_ALL, "portuguese");
	int x1, x2;
	cout << " Informe o valor n e sua pot�ncia: ";
	cin >> x1 >> x2;
	int val = pot (x1, x2);
	cout << " Pot�ncia = " << val;
	
	return 0;
}
int pot (int n1, int n2)
{
	int result = 1;
	for (int i=1; i<=n2; i++)
		result = result *n1;
	
	return result;
}

