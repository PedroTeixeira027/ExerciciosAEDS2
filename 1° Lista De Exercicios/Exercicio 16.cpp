//16.Escreva um programa que tenha uma função que receba 2 números e retorne o 
//MMC  (Mínimo  Múltiplo  Comum)  dos  2  números  recebidos.  "O  mínimo  múltiplo
//16 - comum,  ou  MMC,  de  dois  ou  mais  números  inteiros  é  o  menor  múltiplo 
//inteiro positivo comum a todos eles. Por exemplo, o MMC de 6 e 8 é o 24, e 
//denotamos isso por MMC (6, 8) = 24." 
#include <iostream>
#include <locale.h>

using namespace std;

// Função para calcular o MDC (Máximo Divisor Comum) de dois números
int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}

// Função para calcular o MMC (Mínimo Múltiplo Comum) de dois números
int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

int main() {
	setlocale(LC_ALL,"portuguese");
    int num1, num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    int resultadoMMC = mmc(num1, num2);

    cout << "O MMC de " << num1 << " e " << num2 << " é: " << resultadoMMC << endl;

    return 0;
}