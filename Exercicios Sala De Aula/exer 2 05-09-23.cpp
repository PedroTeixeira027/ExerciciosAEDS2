/*
2- Faça um progama que utilize a função calcArea, receba as medidas de um triângulo, calcule e imprima o valor da área.
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
    cout << "Informe a base e a altura de um retângulo: ";
    cin >> base >>altura; 
    float area = calcArea(base, altura);
	cout << "área = "<< area<<"m²";
}
	
	return 0;
}