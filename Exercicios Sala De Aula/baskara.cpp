/*
3-Uma fun��o que receba os valores a, b e c passados por valor, 
receba tamb�m dois valores x1 e x2 passados por refer�ncia. 
Em seguida, calcule e retorne as duas ra�zes da equa��o do 
segundo grau nas vari�veis x1 e x2.
Xs = (-b � raiz(b�-4ac))/(2a)
*/
#include <iostream>
#include <math.h>
using namespace std;
void raizes (float a, float b, float c, float &x1, float &x2);

int main()
{
	float a=1, b=2, c=1;
	float x1,x2;
	raizes(a,b,c, x1, x2);
	cout<<"x1= "<< x1<< endl;
	cout<<"x2= "<< x2<< endl;
	return 0;
}
void raizes (float a, float b, float c, float &x1, float &x2)
{
	float delta = b*b-4*a*c;
	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);
}
