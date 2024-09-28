/*
Elabore um programa que leia o nome completo de uma pessoa e uma letra, chame a função contaChar
(que recebe como parâmetro nome e letra lidos e retorna o número de vezes que essa letra aparece no nome) 
e imprima o número de vezes que a letra apareceu no nome.

strlenn

*/

#include <iostream>
#include <locale>

using namespace std;

void contChar(string nome, char letra);
int main()
{
	string n; 
	char letra;
	cout << " Informe nome completo: ";
	getline(cin,n);
	cout << " Informe o caractere: ";
	cin >> letra;
	
	int qtde = contaChar(n, letra);

	cout << " A letra apareceu  " << qtde << " vezes. ";
	
	return 0;
}
void contaChar(string nome, char letra)
{
	int tam = nome.length();
	int i=0, aux=0;
	while (i<tam)
	{
		if(nome[i] == letra)
			aux++;
		i++;
	}
	return aux;
}