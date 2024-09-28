#include <iostream>
#include <locale.h>

using namespace std;

int decimal(int bin);

int main()
{
	setlocale(LC_ALL,"portuguese");
	int binario, dec;
	cout << "Número binário: ";
	cin >> binario;
	dec = decimal(binario);
	cout << "O número decimal convertido é: " << dec <<endl;
	return 0;
}

int decimal(int bin){
	int dec = 0;
	if(bin<1)
		return 0;
	else{
		dec = 2 * decimal(bin/10) + (bin % 10);
		return dec;
	}
}