#include <iostream>
#include <fstream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	ofstream arq1; //arq. de saída
	
	arq1.open("teste.txt", ios::app); // abertura do arquivo
	
	if (arq1.is_open()){
		long pos = arq1.tellp();
		cout << "A posção atual do arquivo é: " << pos << endl;
		arq1 << "Fulano de Tal" << endl;
		arq1 << "Ciclano de Tal" << endl;
		arq1 << "Beltrano de Tal" << endl;
	}
	
	arq1.close();
	
	return 0;
}