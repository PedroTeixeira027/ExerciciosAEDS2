//10.Escreva  uma  função  que  ordene  o  valor  de  três  argumentos  do  tipo
//char.  Por exemplo,   se   ch1,   ch2   e   ch3   são   variáveis   do   tipo 
//char   com   valores, respectivamente, ‘B’, ‘A’ e ‘C’, após a chamada à 
//função, as variáveis conterão, respectivamente, ‘A’, ‘B’ e ‘C’. Utilize a 
//passagem dos argumentos por referência
#include <iostream>
#include <locale.h>

using namespace std;

// Função para ordenar três caracteres
void ordenarCaracteres(char &ch1, char &ch2, char &ch3) {
    char temp;

    if (ch1 > ch2) {
        temp = ch1;
        ch1 = ch2;
        ch2 = temp;
    }

    if (ch2 > ch3) {
        temp = ch2;
        ch2 = ch3;
        ch3 = temp;
    }

    if (ch1 > ch2) {
        temp = ch1;
        ch1 = ch2;
        ch2 = temp;
    }
}

int main() {
	setlocale(LC_ALL,"portuguese");
    char ch1 = 'B';
    char ch2 = 'A';
    char ch3 = 'C';

    cout << "Antes da ordenação: " << ch1 << ", " << ch2 << ", " << ch3 << endl;

    ordenarCaracteres(ch1, ch2, ch3);

    cout << "Após a ordenação: " << ch1 << ", " << ch2 << ", " << ch3 << endl;

    return 0;
}