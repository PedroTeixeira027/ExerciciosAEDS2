//2.Implemente um programa que leia o nome, a idade e o endere�ode uma pessoa e
//armazene os dados em uma estrutura.
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

// Defini��o da struct Pessoa
struct Pessoa {
    string nome;
    int idade;
    string endereco;
};

int main() {
	setlocale(LC_ALL,"portuguese");
    Pessoa pessoa;  // Cria uma inst�ncia da struct Pessoa

    // Solicita ao usu�rio para inserir os dados da pessoa
    cout << "Digite o nome da pessoa: ";
    getline(cin, pessoa.nome);  // Usamos getline para ler uma linha completa, permitindo espa�os no nome

    cout << "Digite a idade da pessoa: ";
    cin >> pessoa.idade;

    cin.ignore();  // Limpa o buffer de entrada para evitar problemas com a leitura da pr�xima linha

    cout << "Digite o endere�o da pessoa: ";
    getline(cin, pessoa.endereco);

    // Exibe os dados armazenados na struct Pessoa
    cout << "\nDados da pessoa inseridos:\n";
    cout << "Nome: " << pessoa.nome << endl;
    cout << "Idade: " << pessoa.idade << endl;
    cout << "Endere�o: " << pessoa.endereco << endl;

    return 0;
}