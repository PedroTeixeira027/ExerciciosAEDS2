#include <iostream>
#include <locale.h>

using namespace std;

struct TPessoas
{
	string nome, email, cpf, celular;
};


int menu()
{
	int op;
	cout <<"----Menu----" <<endl;
	cout <<"1- Cadastro " <<endl;
	cout <<"2- Consultar por CPF "<<endl;
	cout <<"3- Sair "<<endl;
	cout <<"Qual a opção?"<<endl;
	cin >> op;
	return op;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	TPessoas pessoas[100];
	int cont =0;
	bool continuar = true;
	
	while(continuar)
	{
		int op = menu();
		string aux;
		switch(op)
		{
		case 1:
			cout <<"Nome: "; cin >> pessoas[cont].nome;
			cout <<"E-Mail: "; cin >> pessoas[cont].email;
			cout <<"CPF: "; cin >> pessoas[cont].cpf;
			cout <<"Celular: "; cin >> pessoas[cont].celular;
			cont++;
			cout <<"Cadastro ok!!\n";
			break;
		case 2:
			cout<<"Informe CPF para consulta: ";
			cin >>aux;
			for(int i=0; i< cont; i++)
			{
				if(aux == pessoas[i].cpf)
				{
					cout <<"Nome: "<< pessoas[i].nome<<endl;
					cout <<"E-Mail: " << pessoas[i].email<<endl;
					cout <<"Celular: " << pessoas[i].celular<<endl;
					cout<<endl;
				}
			}
			break;
		case 3:
			continuar = false;
			break;
		default:
			cout<<"Opção inválida!\n";
		}
	}
	return 0;
}