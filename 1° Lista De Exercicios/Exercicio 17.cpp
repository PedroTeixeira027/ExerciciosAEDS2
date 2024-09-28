//17.Escreva um programa que tenha uma função que receba 2 números e retorne o 
//MDC (Máximo Divisor Comum) dos 2 números recebidos. "Dois números naturais sempre
//têm divisores comuns. Por exemplo: os divisores comuns de 12 e 18 são 1,2,3 e 6.
//Dentre eles, 6 é o maior. Então chamamos o 6 de máximo divisor comum de 12 e 18
//e indicamos MDC(12,18) = 6." 
#include <iostream>
#include <locale.h>

using namespace std;

// Função para calcular o MDC (Máximo Divisor Comum) de dois números
int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
	setlocale(LC_ALL,"portuguese");
    int num1, num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    int resultadoMDC = mdc(num1, num2);

    cout << "O MDC de " << num1 << " e " << num2 << " é: " << resultadoMDC << endl;

    return 0;
}