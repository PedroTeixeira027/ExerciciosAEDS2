#include <istream>
#include <locale.h>

using namespace std;

void funcao (int &a, int &b);

int main()
{
	setlocale(LC_ALL,"portuguese");
	int a=5, b=9;
	funcao(a,b);
	cout << "a= "<<a<<"b= "<<b;
	return 0;
}

void funcao (int &a, int &b)
{
	a = a - 8;
	b = b + 4;
}