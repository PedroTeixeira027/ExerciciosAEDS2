/*
2-Desenvolva um programa que cadastre o nome, a 
matr�cula e 2 notas de v�rios alunos. Em seguida 
imprima a matr�cula , o  nome e a m�dia de cada um 
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
	cout <<"Quantos alunos est�o matriculados? ";
	cin >> num;
	TDados alunos[num];
	cout<<"Cadastro:\n";
	for(int i=0; i<num; i++)
	{
		cout<<"Nome: ";cin>>alunos[i].nome;
		cout<<"Matr�cula: ";cin>>alunos[i].matricula;
		cout<<"Nota1: ";cin>>alunos[i].nota1;
		cout<<"Nota2: ";cin>>alunos[i].nota2;
		cout<<"\n";
	}
	for(int i=0; i<num; i++)
	{
	   cout<<"Matr�cula: "<< alunos[i].matricula;
       cout<<" M�dia: "<< 
	                 (alunos[i].nota1+alunos[i].nota2)/2;	
       cout<<endl;
    }	
	return 0;
}
