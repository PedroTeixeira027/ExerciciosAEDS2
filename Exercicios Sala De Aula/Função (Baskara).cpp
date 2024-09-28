#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

void raizes(float a, float b, float c, float &x1, float&x2);

int main()
{
	setlocale(LC_ALL,"portuguese");
	float a=1, b=2, c=1;
	float x1, x2;
	raizes(a,b,c,x1,x2);
	cout <<"x1= "<<x1<<endl;
	cout <<"x2= "<<x2<<endl;
	return 0;
}

void raizes(float a, float b, float c, float &x1, float&x2)
{
	float delta = b*b-4*a*c;
	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);
}