/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <locale.h>
using namespace std;


void celsius_p_fahrenheit(float x) {
	
	float temf;
	temf = (x*9/5) + 32;
	cout << "A temperatura em fahrenheit e: "<< temf << endl;
}

void celsius_p_kelvin(float x) {
	
	float temk;
	temk = x+273,15;
	cout << "A temperatura em kelvin e: "<< temk << endl;
	
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	int c;
	cout << "Informe a temperatura em celsius: ";
	cin >> c;
	celsius_p_fahrenheit(c);
	
	int k;
	cout << "Informe a temperatura em celsius: ";
	cin >> k;
	celsius_p_kelvin(k);
	
	return 0;
}
