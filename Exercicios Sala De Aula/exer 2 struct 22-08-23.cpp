/*
2-Desenvolva um programa que cadastre o nome, a 
matr�cula e 2 notas de v�rios alunos. Em seguida 
imprima a matr�cula , o  nome e a m�dia de cada um 
deles.
*/

#include <iostream>
#include <locale>

using namespace std;

struct TDados{
	string nome;
	int matricula;
	float not1, not2;
};

int main()
{
    setlocale(LC_ALL, "portuguese");
	TDados dados[10];
	int op=0, pos=0;
	while(op!=5)//menu
	{
		cout << " Op��es:\n1 - Cadastrar 1 pessoa\n ";
		cout << " 2 - Fazer m�dia\n ";
		cout << " 3 - Sair\n ";
		cout << " Informe sua op��o: ";
		cin >> op;   
		
		switch(op)
		{
			
			case 1: //cadastrar pessoa
				cout << " Informe o nome: ";
				cin >> dados[pos].nome;
				cout << " Informe a matr�cula: ";
				cin >> dados[pos].matricula;
				cout << " Informe a nota da P1: ";
				cin >> dados[pos].not1;
				cout << " Informe a nota da P2: ";
				cin >> dados[pos].not2;
				pos++;
				break;
		}
	}
		
	return 0;
}