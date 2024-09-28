//16.Escreva um programa que tenha uma fun��o que receba 2 n�meros e retorne o 
//MMC  (M�nimo  M�ltiplo  Comum)  dos  2  n�meros  recebidos.  "O  m�nimo  m�ltiplo
//16 - comum,  ou  MMC,  de  dois  ou  mais  n�meros  inteiros  �  o  menor  m�ltiplo 
//inteiro positivo comum a todos eles. Por exemplo, o MMC de 6 e 8 � o 24, e 
//denotamos isso por MMC (6, 8) = 24." 
#include <iostream>
#include <locale.h>

using namespace std;

// Fun��o para calcular o MDC (M�ximo Divisor Comum) de dois n�meros
int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}

// Fun��o para calcular o MMC (M�nimo M�ltiplo Comum) de dois n�meros
int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

int main() {
	setlocale(LC_ALL,"portuguese");
    int num1, num2;

    cout << "Digite o primeiro n�mero: ";
    cin >> num1;

    cout << "Digite o segundo n�mero: ";
    cin >> num2;

    int resultadoMMC = mmc(num1, num2);

    cout << "O MMC de " << num1 << " e " << num2 << " �: " << resultadoMMC << endl;

    return 0;
}