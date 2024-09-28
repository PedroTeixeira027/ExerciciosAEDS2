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
	setlocale(LC_ALL,"portuguese");
	TDados dados[10];
	int op=0,pos=0;
	while(op!=5)//menu
	{
	   cout << "Opções:\n1-Cadastrar 1 pessoa\n";
	   cout << "2-Listar todos\n";
	   cout << "3-Listar dados determinada data\n";
	   cout << "5-Sair\n";
	   cout << "Informe sua opção:";
	   cin>> op;
	   switch(op)
	   {
	   	case 1:// cadastra pessoa
	   		if(pos<10)
			{
			  cout << "Informe o nome: ";
			  cin>> dados[pos].nome;
			  cout << "Altura: ";
			  cin>> dados[pos].altura;
			  cout << "Data dd mm aaaa: ";
			  cin>> dados[pos].data_nasc.dia >>
			        dados[pos].data_nasc.mes >>
			        dados[pos].data_nasc.ano;
              pos++;
			}
            else
		      cout<< "Não há posição disponível.";
	   		break;
	   	case 2:// listar todos os dados
	   		cout<<"Listagem de dados:\n";
	   		for (int i=0; i<pos; i++)
            {
			   cout<<"Nome: "<<	dados[i].nome<<"\n";
			   cout<<"Altura: "<<dados[i].altura<<"\n";
			   cout<<"Data Nasc.: "<<
			          dados[i].data_nasc.dia<<"/"<<
					  dados[i].data_nasc.mes <<"/"<<
                      dados[i].data_nasc.ano<<"\n";
		    }
	   		break;
	   	case 3:// busca por data
	   		cout<<"Busca por data\n";
	   		cout << "Data dd mm aaaa: ";
	   		int a, b, c;
			cin >> a>>b>>c; 
	   		for (int i=0; i<pos; i++)
            {
    	      if(dados[i].data_nasc.dia == a &&
			     dados[i].data_nasc.mes == b &&
                 dados[i].data_nasc.ano == c)
                 {
                  cout<<"Nome: "<<	dados[i].nome<<"\n";
			      cout<<"Altura: "<<dados[i].altura<<"\n";
				 }
		    }
	   		break;
	   	case 5:
	   		cout << "ACABOU";
	   		break;
	   	default:
	   		break;
	   }
   }
	return 0;
}