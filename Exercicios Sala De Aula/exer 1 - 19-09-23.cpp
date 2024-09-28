/*utilizando passagem de parametros por referencia:
1-Elabore um programa que leia 2 valores e faça a troca desses valores. Crie uma função que receba esses valores como parâmetro
os troque e imprima*/
#include <iostream>

using namespace std;

void trocaVal(int &x, int &y);

int main()
{
	int a, b;
	cout << "Insira 2 valores (valor a e valor b): ";
	cin >> a >> b;
	trocaVal(a,b);
	cout << "os Valores invertidos são: "<<a<<" "<<b;
	
	return 0;
}

void trocaVal(int &x, int &y){
	int aux = y;
	y = x;
	x = aux;
}