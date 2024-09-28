//8.Escreva uma fun��o que desenhe um ret�ngulo de 7linhas por 26colunas usando 
//os caracteres �+�, �-� e �|�. O n�mero de linhas, o de colunas e os caracteres 
//do desenho  s�o  argumentos default da  fun��o.  Quando  a  fun��o  �  chamada  
//sem nenhum argumento, desenha o seguinte ret�ngulo:
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

// Fun��o para desenhar um ret�ngulo
void desenharRetangulo(int linhas = 7, int colunas = 26, char caracter = '+') {
    // Verifique se o n�mero de linhas e colunas � v�lido
    if (linhas < 2 || colunas < 2) {
        cout << "N�mero de linhas e colunas deve ser pelo menos 2." << endl;
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
    // Chamando a fun��o sem argumentos, usa os valores padr�o
    desenharRetangulo();

    return 0;
}