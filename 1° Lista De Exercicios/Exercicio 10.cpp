//10.Escreva  uma  fun��o  que  ordene  o  valor  de  tr�s  argumentos  do  tipo
//char.  Por exemplo,   se   ch1,   ch2   e   ch3   s�o   vari�veis   do   tipo 
//char   com   valores, respectivamente, �B�, �A� e �C�, ap�s a chamada � 
//fun��o, as vari�veis conter�o, respectivamente, �A�, �B� e �C�. Utilize a 
//passagem dos argumentos por refer�ncia
#include <iostream>
#include <locale.h>

using namespace std;

// Fun��o para ordenar tr�s caracteres
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

    cout << "Antes da ordena��o: " << ch1 << ", " << ch2 << ", " << ch3 << endl;

    ordenarCaracteres(ch1, ch2, ch3);

    cout << "Ap�s a ordena��o: " << ch1 << ", " << ch2 << ", " << ch3 << endl;

    return 0;
}