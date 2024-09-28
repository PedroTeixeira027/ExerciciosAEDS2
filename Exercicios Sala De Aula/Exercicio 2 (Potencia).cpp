#include <iostream>
#include <locale.h>

using namespace std;

int calcule(int x, int n);

int main()
{
	setlocale(LC_ALL,"portuguese");
	int n,x;
	cout << "Digite o valor X: ";
	cin >> x;
	cout << "Digite o valor N: ";
	cin >> n;
	cout << calcule(x,n);
	return 0;
}

int calcule(int x, int n){
	int prod = x;
	if(n >1)
	{
		prod *= calcule(x, n-1);
	}
	else
	{
		return prod;
	}
}