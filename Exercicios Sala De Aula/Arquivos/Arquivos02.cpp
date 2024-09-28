#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	string frase;
	cout << "Escreva uma frase para ser escrita no arquivo string.txt: ";
	
	getline(cin,frase);
	
	cout << frase << endl;
	cout << "Obrigado. Escrevendo dados no arquivo string.tx...\n";
	
	ofstream arqdados;
	
	arqdados.open("string.txt");
	
	arqdados << "Utilizamos os objetos ofstram para escrever em arquivos\n";
	arqdados << "Note que podemos utilzar os caracteres \\n para quebrar a linha, como faziamos em cout\n";
	
	int numero = 100;
	
	arqdados << "Podemos escrever o valor de variaveis numericas: " << numero << "\n";
	
	int matriz[3] ={42,19,99};
	
	arqdados << "Podemos também escrever matrizes!";
	
	for (int i=0; i<3;i++){
		arqdados.width(6); //incluir espaçamento entre os valores
		arqdados << matriz[i]<<" ";
	}
	
	arqdados << "\n";
	arqdados << "Finalmente, podemos receber dados via cin e escreveer este dados no arquivo!\n";
	arqdados << "A frase que você digitou durante a execução do programa: " << frase << "\n";
	
	arqdados.close();
	
	cout << "Dados escritos no arquivo. Fim do programa!";
	
	system("PAUSE");
	return 0;
}