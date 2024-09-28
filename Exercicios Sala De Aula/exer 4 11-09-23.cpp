/*
4-  Calcule a soma de todos os valores primos entre 2 e o valor N a ser informado pelo usuário. Elabore uma função para isso.
*/

#include <iostream>
using namespace std;

int somaPrimos(int N);

int main()
{
   int N;
   cout << "Informe um valor N inteiro positivo: ";
   cin >> N; 
   int soma = somaPrimos(N);
   cout << "A soma é "<< soma;   
}
int somaPrimos(int N)
{
	int s=0;
	int cont=0;
	for (int i=2; i <=N; i++)// aqui pea valores de 2 até N
	{
		for (int y=2; y<=i; y++)// aqui verifica se é primo
		{
			if(i % y == 0)
				cont++;
		}
		if (cont <=1)//é primo
			s = s+ i;
		cont=0;
	}
	
	
	return s;
}