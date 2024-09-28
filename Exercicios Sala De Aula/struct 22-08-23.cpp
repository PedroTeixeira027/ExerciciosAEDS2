#include <iostream>
#include <locale>

using namespace std;

struct TData{
	int dia, mes, ano;
};
struct TDados{
	string nome;
	float altura;
	TData data_nasc;
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	TDados dados[10];
	int op=0, pos=0;
	while(op!=5)//menu
	{
		cout << " Opções:\n1 - Cadastrar 1 pessoa\n ";
		cout << " 2 - Listar todos\n ";
		cout << " 3 - Listar dados de determinada data\n ";
		cout << " 4 - Sair\n ";
		cout << " Informe sua opção: ";
		cin >> op;
		
		switch(op)
		{
			case 1: //cadastrar pessoa
				cout << " Informe o nome:";
				cin >> dados[pos].nome;
				cout << " Altura: ";
				cin >> dados[pos].altura;
				cout << " Dia: ";
				cin >> dados[pos].data_nasc.dia;
				cout << " Mês: ";
				cin >> dados[pos].data_nasc.mes;
				cout << " Ano: ";
				cin >> dados[pos].data_nasc.ano;
				pos++;
				break;
			
			case 2://listar todos os cadastros
				cout << " Listagem de cadastros\n ";
				for(int i=0; i<pos; i++){
					cout << " Nome: " << dados[i].nome <<"\n";
					cout << " Altura: " << dados[i].altura <<"\n";
					cout << " Data: " << dados[i].data_nasc.dia<<
					"/" << dados[i].data_nasc.mes<<
					"/" << dados[i].data_nasc.ano << "\n";
				}
				break;
			
			case 3://buscar por data
				int a,b,c;
				cout << " Informe a data a ser persquisada: ";
				cin >> a >> b >> c;
				for(int i=0; i<pos; i++){
					if ( dados[i].data_nasc.dia==a &&
					dados[i].data_nasc.mes==b &&
			        dados[i].data_nasc.ano==c )
			        {
						cout << " Nome: " <<dados[i].nome << "\n";
						cout << " Altura: " <<dados[i].altura << "\n"; 
					}
				}
				break;
			
			case 4://encerrar programa
				cout << " Acabou!!! ";
				break;
			default:
				cout << " Opção inválida! ";
				break;
		}
	}
	return 0;
}