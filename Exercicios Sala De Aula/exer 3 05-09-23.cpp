/*
3- Leia a data de nascimento de uma pessoa e informe a idade correta. Crie uma função que receba a data lida e retorne a idade.
*/

#include <iostream>
#include <locale>
#include <sstream>

using namespace std;

int getIdade(string data);

int main()
{
	string d;
	cout << " Informe a data de nascimento dd/mm/aaaa: ";
	cin >> d;
	int idade = getIdade(d);
	cout << " Sua idade é: " << idade;
	
}

int getIdade(string data)
{
	int dian, mesn, anon;
	int idade = 0;
	stringstream ss1, ss2, ss3;
	string str = data.substr(0,2);
	ss1 << str;
	ss1 >> dian;
	
	string str = data.substr (3,2);
	ss2 << str;
	ss2 >> mesn;
	
	str = data.substr(6,4);
	ss3 << str;
	ss3 >>anon;
	
	int anoa = 2023, mesa=9, diaa=11;
	cout << " Informe data atual (dd mm aaaa): ";
	cin >> diaa >> mesa >> anoa;
	idade = anoa - anon;
	if (mesa < mesn)
		idade--;
	if (mesa == mesn)
		if (diaa < dian)
			idade--;
		
		return idade; 
}