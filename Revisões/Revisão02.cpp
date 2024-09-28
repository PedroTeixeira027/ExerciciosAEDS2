#include <iostream>
#include <locale.h>

using namespace std;

struct TEletro
{
	char nome[15];
	float pot;
	float temp;
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	TEletro dados[5];
	for(int i=0; i<5; i++)
	{
		cout <<"Nome do Eletro: ";
		cin >> dados[i].nome;
		cout <<"Potência do Eletro: ";
		cin >> dados[i].pot;
		cout <<"Tempo de uso diário: ";
		cin >> dados[i].temp;
	}
	cout <<"Dados cadastrados!!\n";
	int dias;
	cout <<"Informe número de dias para o cálculo: ";
	cin >> dias;
	float consTotal=0;
	float cons[5];
	for(int i = 0; i<5; i++)
	{
		cons[i] = dados[i].pot*dados[i].temp*dias;
		consTotal = consTotal + cons[i];
	}
	cout <<"Consumo de casa = "<<consTotal<<endl;
	for(int i = 0; i<5; i++)
		cout<< dados[i].nome<<"Consumiu"<<cons[i]/consTotal*100<<"%\n";
	return 0;
}