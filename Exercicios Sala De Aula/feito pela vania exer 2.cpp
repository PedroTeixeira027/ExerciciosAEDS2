/*
2-Desenvolva um programa que cadastre o nome, a 
matrícula e 2 notas de vários alunos. Em seguida 
imprima a matrícula , o  nome e a média de cada um 
deles.
*/

#include <iostream>
using namespace std;
struct TDados
{
   string nome, matricula;	
   float nota1, nota2;
};

int main()

{
	int num;
	setlocale(LC_ALL, "portuguese");
	cout <<"Quantos alunos estão matriculados? ";
	cin >> num;
	TDados alunos[num];
	cout<<"Cadastro:\n";
	for(int i=0; i<num; i++)
	{
		cout<<"Nome: ";cin>>alunos[i].nome;
		cout<<"Matrícula: ";cin>>alunos[i].matricula;
		cout<<"Nota1: ";cin>>alunos[i].nota1;
		cout<<"Nota2: ";cin>>alunos[i].nota2;
		cout<<"\n";
	}
	for(int i=0; i<num; i++)
	{
	   cout<<"Matrícula: "<< alunos[i].matricula;
       cout<<" Média: "<< 
	                 (alunos[i].nota1+alunos[i].nota2)/2;	
       cout<<endl;
    }	
	return 0;
}
