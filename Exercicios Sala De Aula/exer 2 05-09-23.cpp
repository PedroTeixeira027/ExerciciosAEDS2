/*
2- Fa�a um progama que utilize a fun��o calcArea, receba as medidas de um tri�ngulo, calcule e imprima o valor da �rea.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	float calcArea(float b, float a)
{
	return b*a;	
}

int main()
{
	float base, altura;
    cout << "Informe a base e a altura de um ret�ngulo: ";
    cin >> base >>altura; 
    float area = calcArea(base, altura);
	cout << "�rea = "<< area<<"m�";
}
	
	return 0;
}