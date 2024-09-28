//12.Escreva uma função recursivaque receba como argumento o número do termo de 
//uma  sequência  de  Fibonacci  e  retorne  o  seu  valor.  Por  exemplo,  se  o
//argumento for 8, a função retornará 13.
#include <iostream>
#include <locale.h>

using namespace std;

// Função recursiva para calcular o termo da sequência de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	setlocale(LC_ALL,"portuguese");
    int termo = 8;
    int resultado = fibonacci(termo);

    cout << "O " << termo << "º termo da sequência de Fibonacci é: " << resultado << endl;

    return 0;
}