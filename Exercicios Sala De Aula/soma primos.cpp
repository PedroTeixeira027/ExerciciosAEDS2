/*
4- Calcule a some de todos os valores primos entre 2 e o valor N
a ser informado pelo usuário. Elabore uma função para isso.
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
	int d=0;// número de divisores
	for( int i=2 ; i<=N; i++)
	{
		for(int x= 2; x<=i; x++)// verifica se é primo
		{
			if (i%x ==0)
				d++;
		}
		// se num. de divisores for maior que 1 não é primo
		if(d<=1)
			s = s + i;
		d=0;
	}
	return s;
}