//17.Escreva um programa que tenha uma fun��o que receba 2 n�meros e retorne o 
//MDC (M�ximo Divisor Comum) dos 2 n�meros recebidos. "Dois n�meros naturais sempre
//t�m divisores comuns. Por exemplo: os divisores comuns de 12 e 18 s�o 1,2,3 e 6.
//Dentre eles, 6 � o maior. Ent�o chamamos o 6 de m�ximo divisor comum de 12 e 18
//e indicamos MDC(12,18) = 6." 
#include <iostream>
#include <locale.h>

using namespace std;

// Fun��o para calcular o MDC (M�ximo Divisor Comum) de dois n�meros
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

    cout << "Digite o primeiro n�mero: ";
    cin >> num1;

    cout << "Digite o segundo n�mero: ";
    cin >> num2;

    int resultadoMDC = mdc(num1, num2);

    cout << "O MDC de " << num1 << " e " << num2 << " �: " << resultadoMDC << endl;

    return 0;
}