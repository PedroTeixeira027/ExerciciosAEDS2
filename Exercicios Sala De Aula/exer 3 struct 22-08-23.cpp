/*3-Desenvolva um programa que cadastre o nome, a altura,
o peso, o CPf e o sexo de algumas pessoas. Com os dados
cadastrados,  localizar uma pessoa atrav?s do seu CPF
e imprimir o seu IMC.
*/

#include <iostream>
using namespace std;
struct TDados
{
   string nome, cpf;
   float altura, peso;
   char sexo;
   
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int n;
	cout << " Qual númeo de pacientes? ";
	cin >> n;
	TDados pacientes[n];
	for (int i=0; i<n; i++)//cadastro
		
	{
		cout << " Nome: ";
		cin >> pacientes[i].nome;
		cout << " CPF: ";
		cin >> pacientes[i].cpf;
		cout << " Altura: ";
		cin >> pacientes[i].altura;
		cout << " Peso: ";
		cin >> pacientes[i].peso;
		cout << " Ssexo (M/F)";
		cin >> pacientes[i].sexo;
	}
	
	string aux;
	cout << " Qual CPF para consulta? ";
	cin >> aux;
	for (int i=0; i<n; i++)//busca
	{
		if (pacientes[i].cpf==aux)
		{
			cout << " IMC= ";
			cout << pacientes[i].peso
		}
	}	

	
	return 0;
}