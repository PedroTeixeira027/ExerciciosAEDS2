/*
1- Elabore um programa com 2 fun��es: a primeira recebe uma temperatura em Celsius e converte em Fahrenheit e a segunda que recebe uma temperaturam em Celsius e converte em Kelvin.
Leia a temperatura, chame as un��es e imprima os resultados.
TK = TC + 273
TF = 9/5*TC + 32
*/


#include <iostream>
#include <locale>

using namespace std;

float tempF(float c)
{
	return c*9/5 +32;
}
float tempK(float c)
{
	return c + 273;
}
int main()
{
	float tempc;
    cout << "Informe uma temperatura em Celsius: ";
    cin >> tempc; 
	cout << tempc<<"�C  = "<< tempF(tempc) <<"�F";
    cout <<endl;
    cout << tempc<<"�C  = "<< tempK(tempc) <<"�K";
    cout <<endl;
}