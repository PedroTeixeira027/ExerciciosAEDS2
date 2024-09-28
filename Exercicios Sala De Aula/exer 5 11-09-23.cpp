/*
5- Faça um programa que utilizando de uma função imprima a sequencia Fibonacci até a anésima posição. O valor não deve ser fornecido pelo usúario.
Exemplo:
N = 11
Saída = 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. 
*/

#include <locale>
#include <iostream>

using namespace std;
 
void imprimeFibo (int N);
int main()
{
	int n;
	cout << " Informe a quantidade de termos a serem impressos: ";
	cin >> n;
	imprimeFibo(n);
	
	return 0;
}
void imprimeFibo(int N)
{
	string saida=" ";
	int n1=0, n2=1, s=0;
	for(int i=1; i<=N; i++)
	{
		if(i<=3)
		{
			cout << s << " ";
			s = n2;
			n1 = n2;
		}
		else
		{
				s = n1 + n2;
				cout << s << " ";
				n1 = n2;
				n2 = s;
		}
	}
	
}