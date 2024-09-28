#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>

using namespace std;

int main()
{
	string linha;
	ifstream arq ("nomes.txt");
	if(arq.is_open()){	
		while(!arq.eof())//enquanto end of file for continua
		{
			getline(arq,linha);
			cout << linha << endl;
		}
		arq.close();
	}
	else cout << "Erro ao abrir o arquivo";
	return 0;
}