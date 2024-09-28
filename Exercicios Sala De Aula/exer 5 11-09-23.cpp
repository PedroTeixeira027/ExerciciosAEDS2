/*
5- Fa�a um programa que utilizando de uma fun��o imprima a sequencia Fibonacci at� a an�sima posi��o. O valor n�o deve ser fornecido pelo us�ario.
Exemplo:
N = 11
Sa�da = 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. 
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