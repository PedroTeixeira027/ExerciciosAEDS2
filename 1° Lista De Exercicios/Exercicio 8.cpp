//8.Escreva uma função que desenhe um retângulo de 7linhas por 26colunas usando 
//os caracteres ‘+’, ‘-’ e ‘|’. O número de linhas, o de colunas e os caracteres 
//do desenho  são  argumentos default da  função.  Quando  a  função  é  chamada  
//sem nenhum argumento, desenha o seguinte retângulo:
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

// Função para desenhar um retângulo
void desenharRetangulo(int linhas = 7, int colunas = 26, char caracter = '+') {
    // Verifique se o número de linhas e colunas é válido
    if (linhas < 2 || colunas < 2) {
        cout << "Número de linhas e colunas deve ser pelo menos 2." << endl;
        return;
    }

    // Linha superior
    cout << caracter;
    for (int i = 0; i < colunas - 2; ++i) {
        cout << '-';
    }
    cout << caracter << endl;

    // Linhas do meio
    for (int i = 0; i < linhas - 2; ++i) {
        cout << caracter;
        for (int j = 0; j < colunas - 2; ++j) {
            cout << ' ';
        }
        cout << caracter << endl;
    }

    // Linha inferior
    cout << caracter;
    for (int i = 0; i < colunas - 2; ++i) {
        cout << '-';
    }
    cout << caracter << endl;
}

int main() {
	setlocale(LC_ALL,"portuguese");
    // Chamando a função sem argumentos, usa os valores padrão
    desenharRetangulo();

    return 0;
}