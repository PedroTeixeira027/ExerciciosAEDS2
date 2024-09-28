#include <iostream>
using namespace std;

float somar(float x, float y)
{
	float soma = x+y;
	return soma;
}
float subtrair(float x, float y);
float multiplicar(float x, float y);
void dividir(float x, float y);

int main()
{
	float a1, a2;
	cout<<"Informe 2 valores: ";
	cin>> a1 >> a2;
	cout << "Soma =" << somar(a1, a2)<< endl;
	
	cout<<"Informe 2 valores: ";
	cin>> a1 >> a2;
	cout << "Diferença= "<<subtrair(a1, a2)<< endl;

    cout<<"Informe 2 valores: ";
	cin>> a1 >> a2;
	cout << "Produto= "<< multiplicar(a1, a2)<< endl;
	
    cout<<"Informe 2 valores: ";
	cin>> a1 >> a2;
	dividir(a1, a2);//não tem retorno
	return 0;
}
float subtrair(float x, float y)
{
	float sub = x-y;
	return sub;
}
float multiplicar(float x, float y)
{
    float mult = x*y;
	return mult;
}
void dividir(float x, float y)
{
	if(y==0)
		cout<<"ERRO!!Impossível dividir por ZERO";
	else
		cout<<"Divisão= "<< x/y;
}