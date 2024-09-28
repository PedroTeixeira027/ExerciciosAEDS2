/*
2- Escreva uma função com assinatura:
int somaIntervalo (int n1, int 2).
Construa uma que retorne a soma dos números inteiros que existem no intervalo [n1, n2] (inclusive).
Caso n2, seja menor que n1, a função deve tratar o intervalo como [n2,n1]
n = somaIntervalo (2,7);
n = 27 (2+3+4+5+6+7)
*/

#include <iostream>
#include <locale>

using namespace std;
int somaIntervalo (int n1, int n2);

int main()
{
	setlocale (LC_ALL, "portuguese");
	int x1, x2;
	cout << " Informe o valor inicial e final do intervalo ";
	cin >> x1 >> x2;
	int soma = somaIntervalo (x1,x2);
	cout << " Soma = " << soma;
	
	return 0;
}
int somaIntervalo (int n1, int n2)
{
	int soma = 0;
	
		if (n2>n1){
		for (int i=n1; i <=n2; i++)
			soma = soma + i;
		}
	
		else{
			for (int i=n2; i <=n1; i++)
				soma = soma + i;
		}
		return soma;
	
		
			
			
}