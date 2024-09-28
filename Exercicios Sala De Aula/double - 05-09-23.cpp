#include <iostream>
#include <locale>

using namespace std;

double soma (double x, double y)
{
	double soma = x+y;
	return soma;
}

double diferenca ( double x, double y)
{
	double sub = x-y;
	return sub;
}

double diferenca (double x, double y)
{
	double mult = x*y;
	return mult;
}

double divisao (double x, double y)
{
	double div =0;
	if (y !=0)
	divi = x/y;
return div;
}

void par_e_impar (int x)
{
	int result = x%2;
	if (result ==0)
		cout << "PAR";
	else
	cout < "IMPAR";
//return;
}

int main ()
{	

setlocale (LC_ALL, "portuguese");
	
	int c;
	cout << " Informe valor inteiro: ";
	cin >> c;
	par_e_impar (c);
	cout << endl;

	double a, b;
	cout << " Informe os valores reis ";
	cin >> a >> b;
	double soma = a+b;
	cout <<  " Soma = " << somar (a,b) << endl;

	
	cout << " Informe os valores reais ";
	cin >> a >> b;
	double sub = a-b;
	cout << " Diferença = " << diferenca (a,b) << endl;
	
	cout << " Informe os valores reais ";
	cin >> a >> b;
	double mult = a*b;
	cout << " Produto = " << mult << endl;
	
	cout << " Informe os valores reais ";
	cin >> a >> b;
	double div = 0;
	if (b !=0)
		div = a/b;
	cout << " Divisão = " << div << endl;
	
	return 0;
	
}

double diferenca ( double x, double y)
{
	double sub = x-y;
	return sub;
}
