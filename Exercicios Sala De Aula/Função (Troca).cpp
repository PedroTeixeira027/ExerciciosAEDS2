#include <iostream>
#include <iostream>

using namespace std;

void troca (int &a, int &b);

int main()
{
	setlocale(LC_ALL,"portuguese");
	int a = 5;
	int b = 8;
	cout <<"a= "<<a<<" b= "<<b<<endl;
	troca(a,b);
	cout <<"a= "<<a<<" b= "<<b<<endl;
	return 0;
}

void troca (int &a, int &b)
{
	int temp = b;
	b = a;
	a = temp;
}