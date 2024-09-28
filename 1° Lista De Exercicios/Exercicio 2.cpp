//2.Implemente um programa que leia o nome, a idade e o endereçode uma pessoa e
//armazene os dados em uma estrutura.
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

// Definição da struct Pessoa
struct Pessoa {
    string nome;
    int idade;
    string endereco;
};

int main() {
	setlocale(LC_ALL,"portuguese");
    Pessoa pessoa;  // Cria uma instância da struct Pessoa

    // Solicita ao usuário para inserir os dados da pessoa
    cout << "Digite o nome da pessoa: ";
    getline(cin, pessoa.nome);  // Usamos getline para ler uma linha completa, permitindo espaços no nome

    cout << "Digite a idade da pessoa: ";
    cin >> pessoa.idade;

    cin.ignore();  // Limpa o buffer de entrada para evitar problemas com a leitura da próxima linha

    cout << "Digite o endereço da pessoa: ";
    getline(cin, pessoa.endereco);

    // Exibe os dados armazenados na struct Pessoa
    cout << "\nDados da pessoa inseridos:\n";
    cout << "Nome: " << pessoa.nome << endl;
    cout << "Idade: " << pessoa.idade << endl;
    cout << "Endereço: " << pessoa.endereco << endl;

    return 0;
}